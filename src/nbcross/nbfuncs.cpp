//
//  nbfuncs.cpp
//  nbcross
//
//  Created by Philip Koch on 11/28/14.
//  Copyright (c) 2014 pkoch. All rights reserved.
//

#include "nbfuncs.h"
#include <assert.h>
#include <vector>

std::vector<nbfunc_t> FUNCS;

std::vector<nbopaquelog_t> args;
std::vector<nbopaquelog_t> rets;

//Common arg types -- used to check arg types and for human readability.
char sYUVImage[] = "YUVImage";
char sParticleSwarm_pbuf[] = "ParticleSwarm";
char sParticle_pbuf[] = "Particle";
char sTest[] = "test";

char stext[] = "text";//No current sources for this data type.

int test_func() {
    for (int i = 0; i < args.size(); ++i) {
        printf("test_func(): %s\n", args[i].desc);
        rets.push_back(args[i]);
    }
    
    return 0;
}

#define NUM_ARG_FOR_ARG_TEST_FUNC 5
int arg_test_func() {
    printf("arg_test_func()\n");
    assert(NUM_ARG_FOR_ARG_TEST_FUNC == args.size());
    for (int i = 0; i < NUM_ARG_FOR_ARG_TEST_FUNC; ++i) {
        printf("\t%s\n", args[i].desc);
    }
    
    return 0;
}

void register_funcs() {
    
    /*test func (no args)*/
    nbfunc_t test;
    test.name = (char *) "test";
    test.num_args = 2;
    test.arg_names = (char **) malloc(sizeof(char *) * 2);;
    test.arg_names[0] = sTest;
    test.arg_names[1] = sTest;
    test.func = test_func;
    FUNCS.push_back(test);
    
    nbfunc_t arg_test;
    arg_test.name = (char *) "arg_test";
    arg_test.num_args = NUM_ARG_FOR_ARG_TEST_FUNC;
    arg_test.arg_names = (char **) malloc(sizeof(char *) * NUM_ARG_FOR_ARG_TEST_FUNC);
    arg_test.arg_names[0] = sYUVImage;
    arg_test.arg_names[1] = sYUVImage;
    arg_test.arg_names[2] = sParticleSwarm_pbuf;
    arg_test.arg_names[3] = sParticleSwarm_pbuf;
    arg_test.arg_names[4] = sParticleSwarm_pbuf;
    arg_test.func = arg_test_func;
    FUNCS.push_back(arg_test);
}

int HoughTest_fun() {
    assert(args.size() == 1);
    printf("HoughTest_func()\n");

    logio::log_t log = logio::copyLog(&args[0]);

    int width = 640;
    int height = 480;
    messages::YUVImage image(log.data, width, height, width);
    portals::Message<messages::YUVImage> message(&image);
    man::image::ImageConverterModule converterModule;

    converterModule.imageIn.setMessage(message);
    converterModule.run();

    const messages::PackedImage16* yImage = converterModule.yImage.getMessage(true).get();

    man::image::VisionModule visionModule;
    portals::Message<messages::PackedImage16> message2(yImage);
    visionModule.topYImage.setMessage(message2);
    visionModule.run();

    free(log.desc);
    log.desc = (char*)malloc(name.size() + 1);
    memcpy(log.desc, name.c_str(), name.size() +1);

    rets.push_back(log);
}

