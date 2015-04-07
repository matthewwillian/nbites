


<!DOCTYPE html>
<html lang="en" class="">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    
    
    <title>nbites/FuzzyLogic.h at post · joshimhoff/nbites</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="joshimhoff/nbites" name="twitter:title" /><meta content="nbites - The Northern Bites RoboCup Soccer Package" name="twitter:description" /><meta content="https://avatars1.githubusercontent.com/u/1443719?v=3&amp;s=400" name="twitter:image:src" />
      <meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars1.githubusercontent.com/u/1443719?v=3&amp;s=400" property="og:image" /><meta content="joshimhoff/nbites" property="og:title" /><meta content="https://github.com/joshimhoff/nbites" property="og:url" /><meta content="nbites - The Northern Bites RoboCup Soccer Package" property="og:description" />
      <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">
    <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">
    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="web-socket" href="wss://live.github.com/_sockets/NjU5NzA1NzplOWI1YTA1MzRmODJjNWJiZWFhYmI3MTc0OGM4YTNiMDplOGI0ZWQ1ZjM4ZGZhMWIxOTNlMTg4OWIyYjAzZDg3ZWI1YTQ4NmQzODYxNTI4MjBhYzdlZGNiNWM2MWE3NzBl--a184940da65f077475fb7cba40dd169bbb9254db">
    <meta name="pjax-timeout" content="1000">
    <link rel="sudo-modal" href="/sessions/sudo_modal">

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>
      <meta name="google-analytics" content="UA-3769691-2">

    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="8B8C6D3E:58E9:6B395E:5523223D" name="octolytics-dimension-request_id" /><meta content="6597057" name="octolytics-actor-id" /><meta content="matthewwillian" name="octolytics-actor-login" /><meta content="d5c7c11f1fd4a9b530e20f7a850fc7c3c082f1f668fc5caf010cba61e8454000" name="octolytics-actor-hash" />
    
    <meta content="Rails, view, blob#show" name="analytics-event" />
    <meta class="js-ga-set" name="dimension1" content="Logged In">
    <meta class="js-ga-set" name="dimension2" content="Header v3">
    <meta name="is-dotcom" content="true">
    <meta name="hostname" content="github.com">
    <meta name="user-login" content="matthewwillian">

    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">


    <meta content="authenticity_token" name="csrf-param" />
<meta content="Es6qDQc7WOCjffz93YEbE/kmOfFpJPTpGS+78+Pco+kR55xz58aH/aFmkkScB39C1QDImYHmu6thPCxOWQvvxA==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-b9a6ff74be89fc3bd0700145f09893176e0217b525876169a377b19cc4434e53.css" media="all" rel="stylesheet" />
    <link href="https://assets-cdn.github.com/assets/github2-c52092ec66da34c30c59f04456bc9596135db6e6f397ab48420462c9a05abee6.css" media="all" rel="stylesheet" />
    
    


    <meta http-equiv="x-pjax-version" content="0d6148dd8385910cef552a542d9b8626">

      
  <meta name="description" content="nbites - The Northern Bites RoboCup Soccer Package">
  <meta name="go-import" content="github.com/joshimhoff/nbites git https://github.com/joshimhoff/nbites.git">

  <meta content="1443719" name="octolytics-dimension-user_id" /><meta content="joshimhoff" name="octolytics-dimension-user_login" /><meta content="6196298" name="octolytics-dimension-repository_id" /><meta content="joshimhoff/nbites" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="747160" name="octolytics-dimension-repository_parent_id" /><meta content="northern-bites/nbites" name="octolytics-dimension-repository_parent_nwo" /><meta content="747160" name="octolytics-dimension-repository_network_root_id" /><meta content="northern-bites/nbites" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/joshimhoff/nbites/commits/post.atom" rel="alternate" title="Recent Commits to nbites:post" type="application/atom+xml">

  </head>


  <body class="logged_in  env-production linux vis-public fork page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      


        <div class="header header-logged-in true" role="banner">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <span class="mega-octicon octicon-mark-github"></span>
</a>


      <div class="site-search repo-scope js-site-search" role="search">
          <form accept-charset="UTF-8" action="/joshimhoff/nbites/search" class="js-site-search-form" data-global-search-url="/search" data-repo-search-url="/joshimhoff/nbites/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
  <input type="text"
    class="js-site-search-field is-clearable"
    data-hotkey="s"
    name="q"
    placeholder="Search"
    data-global-scope-placeholder="Search GitHub"
    data-repo-scope-placeholder="Search"
    tabindex="1"
    autocapitalize="off">
  <div class="scope-badge">This repository</div>
</form>
      </div>

      <ul class="header-nav left" role="navigation">
          <li class="header-nav-item explore">
            <a class="header-nav-link" href="/explore" data-ga-click="Header, go to explore, text:explore">Explore</a>
          </li>
            <li class="header-nav-item">
              <a class="header-nav-link" href="https://gist.github.com" data-ga-click="Header, go to gist, text:gist">Gist</a>
            </li>
            <li class="header-nav-item">
              <a class="header-nav-link" href="/blog" data-ga-click="Header, go to blog, text:blog">Blog</a>
            </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://help.github.com" data-ga-click="Header, go to help, text:help">Help</a>
          </li>
      </ul>

      
<ul class="header-nav user-nav right" id="user-links">
  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link name" href="/matthewwillian" data-ga-click="Header, go to profile, text:username">
      <img alt="@matthewwillian" class="avatar" data-user="6597057" height="20" src="https://avatars3.githubusercontent.com/u/6597057?v=3&amp;s=40" width="20" />
      <span class="css-truncate">
        <span class="css-truncate-target">matthewwillian</span>
      </span>
    </a>
  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link js-menu-target tooltipped tooltipped-s" href="#" aria-label="Create new..." data-ga-click="Header, create new, icon:add">
      <span class="octicon octicon-plus"></span>
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <ul class="dropdown-menu">
        
<li>
  <a href="/new" data-ga-click="Header, create new repository, icon:repo"><span class="octicon octicon-repo"></span> New repository</a>
</li>
<li>
  <a href="/organizations/new" data-ga-click="Header, create new organization, icon:organization"><span class="octicon octicon-organization"></span> New organization</a>
</li>



      </ul>
    </div>
  </li>

  <li class="header-nav-item">
        <a href="/notifications" aria-label="You have unread notifications" class="header-nav-link notification-indicator tooltipped tooltipped-s" data-ga-click="Header, go to notifications, icon:unread" data-hotkey="g n">
        <span class="mail-status unread"></span>
        <span class="octicon octicon-inbox"></span>
</a>
  </li>

  <li class="header-nav-item">
    <a class="header-nav-link tooltipped tooltipped-s" href="/settings/profile" id="account_settings" aria-label="Settings" data-ga-click="Header, go to settings, icon:settings">
      <span class="octicon octicon-gear"></span>
    </a>
  </li>

  <li class="header-nav-item">
    <form accept-charset="UTF-8" action="/logout" class="logout-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="aLPVgSW6OX1d4ZfwGqpgm5tyXBQCGSeWhcB2RKdigIUPxDLXj28jqQMPHBWYMsaH4EhC1TmUS4SYD9f8F3mpeA==" /></div>
      <button class="header-nav-link sign-out-button tooltipped tooltipped-s" aria-label="Sign out" data-ga-click="Header, sign out, icon:logout">
        <span class="octicon octicon-sign-out"></span>
      </button>
</form>  </li>

</ul>



    
  </div>
</div>

        

        
<div class="flash-global js-notice flash-warn">
<div class="container">
    <h2>
      You don't have any verified emails.  We recommend <a href="https://github.com/settings/emails">verifying</a> at least one email.
    </h2>
    <p>
Email verification helps our support team verify ownership if you lose account access and allows you to receive all the notifications you ask for.
    </p>



















</div>
</div>


      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        
<ul class="pagehead-actions">

  <li>
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="SHjSpfAq78C4BN1FvCRox2o5WjkORCgOrHOb7QzRDJo6xPU77Ha5/hKvXJp00GgbfUIxNq9+KS0IzvAtVzmo1w==" /></div>    <input id="repository_id" name="repository_id" type="hidden" value="6196298" />

      <div class="select-menu js-menu-container js-select-menu">
        <a href="/joshimhoff/nbites/subscription"
          class="btn btn-sm btn-with-count select-menu-button js-menu-target" role="button" tabindex="0" aria-haspopup="true"
          data-ga-click="Repository, click Watch settings, action:blob#show">
          <span class="js-select-button">
            <span class="octicon octicon-eye"></span>
            Watch
          </span>
        </a>
        <a class="social-count js-social-count" href="/joshimhoff/nbites/watchers">
          2
        </a>

        <div class="select-menu-modal-holder">
          <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
            <div class="select-menu-header">
              <span class="select-menu-title">Notifications</span>
              <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
            </div>

            <div class="select-menu-list js-navigation-container" role="menu">

              <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
                <span class="select-menu-item-icon octicon octicon-check"></span>
                <div class="select-menu-item-text">
                  <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                  <span class="select-menu-item-heading">Not watching</span>
                  <span class="description">Be notified when participating or @mentioned.</span>
                  <span class="js-select-button-text hidden-select-button-text">
                    <span class="octicon octicon-eye"></span>
                    Watch
                  </span>
                </div>
              </div>

              <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                <span class="select-menu-item-icon octicon octicon octicon-check"></span>
                <div class="select-menu-item-text">
                  <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                  <span class="select-menu-item-heading">Watching</span>
                  <span class="description">Be notified of all conversations.</span>
                  <span class="js-select-button-text hidden-select-button-text">
                    <span class="octicon octicon-eye"></span>
                    Unwatch
                  </span>
                </div>
              </div>

              <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                <span class="select-menu-item-icon octicon octicon-check"></span>
                <div class="select-menu-item-text">
                  <input id="do_ignore" name="do" type="radio" value="ignore" />
                  <span class="select-menu-item-heading">Ignoring</span>
                  <span class="description">Never be notified.</span>
                  <span class="js-select-button-text hidden-select-button-text">
                    <span class="octicon octicon-mute"></span>
                    Stop ignoring
                  </span>
                </div>
              </div>

            </div>

          </div>
        </div>
      </div>
</form>
  </li>

  <li>
    
  <div class="js-toggler-container js-social-container starring-container ">

    <form accept-charset="UTF-8" action="/joshimhoff/nbites/unstar" class="js-toggler-form starred js-unstar-button" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="G9goQm48artFiQYylCnNBR41okAsaR/1eBMckjydCEylTTDRppG/W6c1oSDfx9/cGOgpMZjXTZevLvejsXVOkg==" /></div>
      <button
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Unstar this repository" title="Unstar joshimhoff/nbites"
        data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">
        <span class="octicon octicon-star"></span>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/joshimhoff/nbites/stargazers">
          1
        </a>
</form>
    <form accept-charset="UTF-8" action="/joshimhoff/nbites/star" class="js-toggler-form unstarred js-star-button" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="jwwPItD41WtOrYksng9R0cZdX6aybjFFZiIarU13M6eo6kjcFAjfnuQV/VM8mnk+Er5HaZdxRFqKgtrLS2LXTA==" /></div>
      <button
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Star this repository" title="Star joshimhoff/nbites"
        data-ga-click="Repository, click star button, action:blob#show; text:Star">
        <span class="octicon octicon-star"></span>
        Star
      </button>
        <a class="social-count js-social-count" href="/joshimhoff/nbites/stargazers">
          1
        </a>
</form>  </div>

  </li>

        <li>
          <form accept-charset="UTF-8" action="/joshimhoff/nbites/fork" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="B34sHWfcFL6ME6VRa/inb/dH2Hz/gWvCGl2J+SX9Szfzj9YZA3Uy+x4eWBJWgIaIKLlY2QfZm24P57gVUFvtRw==" /></div>
            <button
                type="submit"
                class="btn btn-sm btn-with-count"
                data-ga-click="Repository, show fork modal, action:blob#show; text:Fork"
                title="Fork your own copy of joshimhoff/nbites to your account"
                aria-label="Fork your own copy of joshimhoff/nbites to your account">
              <span class="octicon octicon-repo-forked"></span>
              Fork
            </button>
            <a href="/joshimhoff/nbites/network" class="social-count">74</a>
</form>        </li>

</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="mega-octicon octicon-repo-forked"></span>
          <span class="author"><a href="/joshimhoff" class="url fn" itemprop="url" rel="author"><span itemprop="title">joshimhoff</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/joshimhoff/nbites" class="js-current-repository" data-pjax="#js-repo-pjax-container">nbites</a></strong>

          <span class="page-context-loader">
            <img alt="" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
          </span>

            <span class="fork-flag">
              <span class="text">forked from <a href="/northern-bites/nbites">northern-bites/nbites</a></span>
            </span>
        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            
<nav class="sunken-menu repo-nav js-repo-nav js-sidenav-container-pjax js-octicon-loaders"
     role="navigation"
     data-pjax="#js-repo-pjax-container"
     data-issue-count-url="/joshimhoff/nbites/issues/counts">
  <ul class="sunken-menu-group">
    <li class="tooltipped tooltipped-w" aria-label="Code">
      <a href="/joshimhoff/nbites/tree/post" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /joshimhoff/nbites/tree/post">
        <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>


    <li class="tooltipped tooltipped-w" aria-label="Pull requests">
      <a href="/joshimhoff/nbites/pulls" aria-label="Pull requests" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g p" data-selected-links="repo_pulls /joshimhoff/nbites/pulls">
          <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull requests</span>
          <span class="js-pull-replace-counter"></span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>

      <li class="tooltipped tooltipped-w" aria-label="Wiki">
        <a href="/joshimhoff/nbites/wiki" aria-label="Wiki" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g w" data-selected-links="repo_wiki /joshimhoff/nbites/wiki">
          <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>      </li>
  </ul>
  <div class="sunken-menu-separator"></div>
  <ul class="sunken-menu-group">

    <li class="tooltipped tooltipped-w" aria-label="Pulse">
      <a href="/joshimhoff/nbites/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-selected-links="pulse /joshimhoff/nbites/pulse">
        <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>

    <li class="tooltipped tooltipped-w" aria-label="Graphs">
      <a href="/joshimhoff/nbites/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-selected-links="repo_graphs repo_contributors /joshimhoff/nbites/graphs">
        <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>
  </ul>


</nav>

              <div class="only-with-full-nav">
                  
<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><span class="text-emphasized">HTTPS</span> clone URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/joshimhoff/nbites.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  
<div class="clone-url "
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=clone">
  <h3><span class="text-emphasized">SSH</span> clone URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="git@github.com:joshimhoff/nbites.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  
<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><span class="text-emphasized">Subversion</span> checkout URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/joshimhoff/nbites" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>



<p class="clone-options">You can clone with
  <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>, <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>, or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <a href="https://help.github.com/articles/which-remote-url-should-i-use" class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <span class="octicon octicon-question"></span>
  </a>
</p>




                <a href="/joshimhoff/nbites/archive/post.zip"
                   class="btn btn-sm sidebar-button"
                   aria-label="Download the contents of joshimhoff/nbites as a zip file"
                   title="Download the contents of joshimhoff/nbites as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          

<a href="/joshimhoff/nbites/blob/c38054a9015002fd35838d3ae628b354c4ce65a9/src/man/vision/FuzzyLogic.h" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:dc1582faac1fc97546af4467e1043b40 -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu js-menu-container js-select-menu left">
  <span class="btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    data-master-branch="master"
    data-ref="post"
    title="post"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button css-truncate-target">post</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/14.04/src/man/vision/FuzzyLogic.h"
               data-name="14.04"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="14.04">
                14.04
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/ark_v4/src/man/vision/FuzzyLogic.h"
               data-name="ark_v4"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="ark_v4">
                ark_v4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/ark_v5/src/man/vision/FuzzyLogic.h"
               data-name="ark_v5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="ark_v5">
                ark_v5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/bad_cal_bug/src/man/vision/FuzzyLogic.h"
               data-name="bad_cal_bug"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="bad_cal_bug">
                bad_cal_bug
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/behaviors_improvements/src/man/vision/FuzzyLogic.h"
               data-name="behaviors_improvements"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="behaviors_improvements">
                behaviors_improvements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/behaviors_improvements_kickoff/src/man/vision/FuzzyLogic.h"
               data-name="behaviors_improvements_kickoff"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="behaviors_improvements_kickoff">
                behaviors_improvements_kickoff
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/behaviors_overhaul/src/man/vision/FuzzyLogic.h"
               data-name="behaviors_overhaul"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="behaviors_overhaul">
                behaviors_overhaul
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/behaviors_sim/src/man/vision/FuzzyLogic.h"
               data-name="behaviors_sim"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="behaviors_sim">
                behaviors_sim
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/bh_fall_down_detector/src/man/vision/FuzzyLogic.h"
               data-name="bh_fall_down_detector"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="bh_fall_down_detector">
                bh_fall_down_detector
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/bh_walk/src/man/vision/FuzzyLogic.h"
               data-name="bh_walk"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="bh_walk">
                bh_walk
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/bh_walk_motion_kicks/src/man/vision/FuzzyLogic.h"
               data-name="bh_walk_motion_kicks"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="bh_walk_motion_kicks">
                bh_walk_motion_kicks
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/bh_walk_update/src/man/vision/FuzzyLogic.h"
               data-name="bh_walk_update"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="bh_walk_update">
                bh_walk_update
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/box_positioning/src/man/vision/FuzzyLogic.h"
               data-name="box_positioning"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="box_positioning">
                box_positioning
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/camera_calibrate/src/man/vision/FuzzyLogic.h"
               data-name="camera_calibrate"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="camera_calibrate">
                camera_calibrate
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/claim_improvements/src/man/vision/FuzzyLogic.h"
               data-name="claim_improvements"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="claim_improvements">
                claim_improvements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/comm_monitor_fix/src/man/vision/FuzzyLogic.h"
               data-name="comm_monitor_fix"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="comm_monitor_fix">
                comm_monitor_fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/comm_slow_down/src/man/vision/FuzzyLogic.h"
               data-name="comm_slow_down"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="comm_slow_down">
                comm_slow_down
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/drop_in/src/man/vision/FuzzyLogic.h"
               data-name="drop_in"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="drop_in">
                drop_in
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/drop_in_comm/src/man/vision/FuzzyLogic.h"
               data-name="drop_in_comm"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="drop_in_comm">
                drop_in_comm
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/dropin/src/man/vision/FuzzyLogic.h"
               data-name="dropin"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="dropin">
                dropin
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/dropin_comm/src/man/vision/FuzzyLogic.h"
               data-name="dropin_comm"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="dropin_comm">
                dropin_comm
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/dropincomm/src/man/vision/FuzzyLogic.h"
               data-name="dropincomm"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="dropincomm">
                dropincomm
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/early_sat/src/man/vision/FuzzyLogic.h"
               data-name="early_sat"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="early_sat">
                early_sat
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/earlySunday/src/man/vision/FuzzyLogic.h"
               data-name="earlySunday"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="earlySunday">
                earlySunday
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/edinferno_v4/src/man/vision/FuzzyLogic.h"
               data-name="edinferno_v4"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="edinferno_v4">
                edinferno_v4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/edinferno_v5/src/man/vision/FuzzyLogic.h"
               data-name="edinferno_v5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="edinferno_v5">
                edinferno_v5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/final_fort_scrimmage/src/man/vision/FuzzyLogic.h"
               data-name="final_fort_scrimmage"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="final_fort_scrimmage">
                final_fort_scrimmage
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/fort/src/man/vision/FuzzyLogic.h"
               data-name="fort"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="fort">
                fort
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/friday_night_dev/src/man/vision/FuzzyLogic.h"
               data-name="friday_night_dev"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="friday_night_dev">
                friday_night_dev
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/gh-pages/src/man/vision/FuzzyLogic.h"
               data-name="gh-pages"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="gh-pages">
                gh-pages
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/hierarchical_state_machine/src/man/vision/FuzzyLogic.h"
               data-name="hierarchical_state_machine"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="hierarchical_state_machine">
                hierarchical_state_machine
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/hough_lines/src/man/vision/FuzzyLogic.h"
               data-name="hough_lines"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="hough_lines">
                hough_lines
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/hough_pre_change/src/man/vision/FuzzyLogic.h"
               data-name="hough_pre_change"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="hough_pre_change">
                hough_pre_change
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/htwk_v4/src/man/vision/FuzzyLogic.h"
               data-name="htwk_v4"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="htwk_v4">
                htwk_v4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/htwk_v5/src/man/vision/FuzzyLogic.h"
               data-name="htwk_v5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="htwk_v5">
                htwk_v5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/java_tool/src/man/vision/FuzzyLogic.h"
               data-name="java_tool"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="java_tool">
                java_tool
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/kick_decider/src/man/vision/FuzzyLogic.h"
               data-name="kick_decider"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="kick_decider">
                kick_decider
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/loc_motion_update/src/man/vision/FuzzyLogic.h"
               data-name="loc_motion_update"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="loc_motion_update">
                loc_motion_update
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/master/src/man/vision/FuzzyLogic.h"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="master">
                master
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/master_v5/src/man/vision/FuzzyLogic.h"
               data-name="master_v5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="master_v5">
                master_v5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/motion_improvements/src/man/vision/FuzzyLogic.h"
               data-name="motion_improvements"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="motion_improvements">
                motion_improvements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/motion_kicking_off/src/man/vision/FuzzyLogic.h"
               data-name="motion_kicking_off"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="motion_kicking_off">
                motion_kicking_off
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/motion_kicks/src/man/vision/FuzzyLogic.h"
               data-name="motion_kicks"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="motion_kicks">
                motion_kicks
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/new_tool/src/man/vision/FuzzyLogic.h"
               data-name="new_tool"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="new_tool">
                new_tool
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/odometry_walk_fix/src/man/vision/FuzzyLogic.h"
               data-name="odometry_walk_fix"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="odometry_walk_fix">
                odometry_walk_fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/odometry_walk_to/src/man/vision/FuzzyLogic.h"
               data-name="odometry_walk_to"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="odometry_walk_to">
                odometry_walk_to
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/old_fall_controller/src/man/vision/FuzzyLogic.h"
               data-name="old_fall_controller"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="old_fall_controller">
                old_fall_controller
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/path_planning/src/man/vision/FuzzyLogic.h"
               data-name="path_planning"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="path_planning">
                path_planning
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/play_off_ball/src/man/vision/FuzzyLogic.h"
               data-name="play_off_ball"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="play_off_ball">
                play_off_ball
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/joshimhoff/nbites/blob/post/src/man/vision/FuzzyLogic.h"
               data-name="post"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="post">
                post
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/post_detection_research/src/man/vision/FuzzyLogic.h"
               data-name="post_detection_research"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="post_detection_research">
                post_detection_research
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/post_tool/src/man/vision/FuzzyLogic.h"
               data-name="post_tool"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="post_tool">
                post_tool
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/role_switching/src/man/vision/FuzzyLogic.h"
               data-name="role_switching"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="role_switching">
                role_switching
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/saturdayNightWatson/src/man/vision/FuzzyLogic.h"
               data-name="saturdayNightWatson"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="saturdayNightWatson">
                saturdayNightWatson
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/science_festival/src/man/vision/FuzzyLogic.h"
               data-name="science_festival"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="science_festival">
                science_festival
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_6_23/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_6_23"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_6_23">
                scrimmage_6_23
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_6_24/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_6_24"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_6_24">
                scrimmage_6_24
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_6_26/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_6_26"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_6_26">
                scrimmage_6_26
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_6_27/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_6_27"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_6_27">
                scrimmage_6_27
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_6_29/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_6_29"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_6_29">
                scrimmage_6_29
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_6_30/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_6_30"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_6_30">
                scrimmage_6_30
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_2/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_2"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_2">
                scrimmage_7_2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_3/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_3"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_3">
                scrimmage_7_3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_8/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_8"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_8">
                scrimmage_7_8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_9/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_9"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_9">
                scrimmage_7_9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_9_v5/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_9_v5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_9_v5">
                scrimmage_7_9_v5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_10/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_10"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_10">
                scrimmage_7_10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_11/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_11"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_11">
                scrimmage_7_11
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_12/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_12"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_12">
                scrimmage_7_12
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_12_v5/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_12_v5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_12_v5">
                scrimmage_7_12_v5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_13/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_13"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_13">
                scrimmage_7_13
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_13_v5/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_13_v5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_13_v5">
                scrimmage_7_13_v5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_14/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_14"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_14">
                scrimmage_7_14
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_16/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_16"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_16">
                scrimmage_7_16
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/scrimmage_7_16_v5/src/man/vision/FuzzyLogic.h"
               data-name="scrimmage_7_16_v5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="scrimmage_7_16_v5">
                scrimmage_7_16_v5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/setup_day_2_v4/src/man/vision/FuzzyLogic.h"
               data-name="setup_day_2_v4"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="setup_day_2_v4">
                setup_day_2_v4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/setup_day_2_v5/src/man/vision/FuzzyLogic.h"
               data-name="setup_day_2_v5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="setup_day_2_v5">
                setup_day_2_v5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/shared_ball_flipping_off/src/man/vision/FuzzyLogic.h"
               data-name="shared_ball_flipping_off"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="shared_ball_flipping_off">
                shared_ball_flipping_off
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/sonars_off_in_lab/src/man/vision/FuzzyLogic.h"
               data-name="sonars_off_in_lab"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="sonars_off_in_lab">
                sonars_off_in_lab
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/test_bh_walk/src/man/vision/FuzzyLogic.h"
               data-name="test_bh_walk"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="test_bh_walk">
                test_bh_walk
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/testing/src/man/vision/FuzzyLogic.h"
               data-name="testing"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="testing">
                testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/usopen/src/man/vision/FuzzyLogic.h"
               data-name="usopen"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="usopen">
                usopen
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/v5/src/man/vision/FuzzyLogic.h"
               data-name="v5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="v5">
                v5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/worldmodel_worldview_improvements/src/man/vision/FuzzyLogic.h"
               data-name="worldmodel_worldview_improvements"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="worldmodel_worldview_improvements">
                worldmodel_worldview_improvements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/joshimhoff/nbites/blob/wpa_supplicant/src/man/vision/FuzzyLogic.h"
               data-name="wpa_supplicant"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="wpa_supplicant">
                wpa_supplicant
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/oldWalk/src/man/vision/FuzzyLogic.h"
                 data-name="oldWalk"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="oldWalk">oldWalk</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/list/src/man/vision/FuzzyLogic.h"
                 data-name="list"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="list">list</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/USOpen2011/src/man/vision/FuzzyLogic.h"
                 data-name="USOpen2011"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="USOpen2011">USOpen2011</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/USOpen12/src/man/vision/FuzzyLogic.h"
                 data-name="USOpen12"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="USOpen12">USOpen12</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/SecondRound2011/src/man/vision/FuzzyLogic.h"
                 data-name="SecondRound2011"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="SecondRound2011">SecondRound2011</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/SFVictory2009/src/man/vision/FuzzyLogic.h"
                 data-name="SFVictory2009"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="SFVictory2009">SFVictory2009</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/QFVictory2009/src/man/vision/FuzzyLogic.h"
                 data-name="QFVictory2009"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="QFVictory2009">QFVictory2009</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/QF2010/src/man/vision/FuzzyLogic.h"
                 data-name="QF2010"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="QF2010">QF2010</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/PreMexico12/src/man/vision/FuzzyLogic.h"
                 data-name="PreMexico12"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="PreMexico12">PreMexico12</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/MexicoFinalGame/src/man/vision/FuzzyLogic.h"
                 data-name="MexicoFinalGame"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="MexicoFinalGame">MexicoFinalGame</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/IntermediateRoundIstanbul2011/src/man/vision/FuzzyLogic.h"
                 data-name="IntermediateRoundIstanbul2011"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="IntermediateRoundIstanbul2011">IntermediateRoundIstanbul2011</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/joshimhoff/nbites/tree/Finals2009/src/man/vision/FuzzyLogic.h"
                 data-name="Finals2009"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="Finals2009">Finals2009</a>
            </div>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="btn-group right">
    <a href="/joshimhoff/nbites/find/post"
          class="js-show-file-finder btn btn-sm empty-icon tooltipped tooltipped-s"
          data-pjax
          data-hotkey="t"
          aria-label="Quickly jump between files">
      <span class="octicon octicon-list-unordered"></span>
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
  </div>

  <div class="breadcrumb js-zeroclipboard-target">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/joshimhoff/nbites/tree/post" class="" data-branch="post" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">nbites</span></a></span></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/joshimhoff/nbites/tree/post/src" class="" data-branch="post" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">src</span></a></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/joshimhoff/nbites/tree/post/src/man" class="" data-branch="post" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">man</span></a></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/joshimhoff/nbites/tree/post/src/man/vision" class="" data-branch="post" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">vision</span></a></span><span class="separator">/</span><strong class="final-path">FuzzyLogic.h</strong>
  </div>
</div>


  <div class="commit file-history-tease">
    <div class="file-history-tease-header">
        <img alt="@joshimhoff" class="avatar" data-user="1443719" height="24" src="https://avatars3.githubusercontent.com/u/1443719?v=3&amp;s=48" width="24" />
        <span class="author"><a href="/joshimhoff" rel="author">joshimhoff</a></span>
        <time datetime="2015-04-02T06:37:34Z" is="relative-time">Apr 2, 2015</time>
        <div class="commit-title">
            <a href="/joshimhoff/nbites/commit/be985909336fe88edf137678a9e19ec2a4b550d1" class="message" data-pjax="true" title="Adds first untested version of C++ post detector">Adds first untested version of C++ post detector</a>
        </div>
    </div>

    <div class="participation">
      <p class="quickstat">
        <a href="#blob_contributors_box" rel="facebox">
          <strong>2</strong>
           contributors
        </a>
      </p>
          <a class="avatar-link tooltipped tooltipped-s" aria-label="dzeller" href="/joshimhoff/nbites/commits/post/src/man/vision/FuzzyLogic.h?author=dzeller"><img alt="@dzeller" class="avatar" data-user="2566912" height="20" src="https://avatars0.githubusercontent.com/u/2566912?v=3&amp;s=40" width="20" /> </a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="joshimhoff" href="/joshimhoff/nbites/commits/post/src/man/vision/FuzzyLogic.h?author=joshimhoff"><img alt="@joshimhoff" class="avatar" data-user="1443719" height="20" src="https://avatars1.githubusercontent.com/u/1443719?v=3&amp;s=40" width="20" /> </a>


    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img alt="@dzeller" data-user="2566912" height="24" src="https://avatars2.githubusercontent.com/u/2566912?v=3&amp;s=48" width="24" />
            <a href="/dzeller">dzeller</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="@joshimhoff" data-user="1443719" height="24" src="https://avatars3.githubusercontent.com/u/1443719?v=3&amp;s=48" width="24" />
            <a href="/joshimhoff">joshimhoff</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file">
  <div class="file-header">
    <div class="file-actions">

      <div class="btn-group">
        <a href="/joshimhoff/nbites/raw/post/src/man/vision/FuzzyLogic.h" class="btn btn-sm " id="raw-url">Raw</a>
          <a href="/joshimhoff/nbites/blame/post/src/man/vision/FuzzyLogic.h" class="btn btn-sm js-update-url-with-hash">Blame</a>
        <a href="/joshimhoff/nbites/commits/post/src/man/vision/FuzzyLogic.h" class="btn btn-sm " rel="nofollow">History</a>
      </div>


            <form accept-charset="UTF-8" action="/joshimhoff/nbites/edit/post/src/man/vision/FuzzyLogic.h" class="inline-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="KcJ9v7YzeL5kjEBRBfwja1J6v7tkBHT4Ek7dGX6EQS16kTP9nNdqbeAT/w6/YrGI9/ch3ym81EoUKFp4TdTcmQ==" /></div>
              <button class="octicon-btn tooltipped tooltipped-n" type="submit" aria-label="Clicking this button will fork this project so you can edit the file" data-hotkey="e" data-disable-with>
                <span class="octicon octicon-pencil"></span>
              </button>
</form>
          <form accept-charset="UTF-8" action="/joshimhoff/nbites/delete/post/src/man/vision/FuzzyLogic.h" class="inline-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="SjNjUjddTxM1qkzXghyzSTqbCp2zBiaT/3zdvPV+4/tMTZCZN8p3dy41j+09y56VX6AFxlnzHx9XFDBrqWq9KQ==" /></div>
            <button class="octicon-btn octicon-btn-danger tooltipped tooltipped-n" type="submit" aria-label="Fork this project and delete file" data-disable-with>
              <span class="octicon octicon-trashcan"></span>
            </button>
</form>    </div>

    <div class="file-info">
        65 lines (51 sloc)
        <span class="file-info-divider"></span>
      1.234 kb
    </div>
  </div>
  
  <div class="blob-wrapper data type-c">
      <table class="highlight tab-size-8 js-file-line-container">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code js-file-line">#<span class="pl-k">pragma</span> once</td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>algorithm<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code js-file-line"><span class="pl-k">namespace</span> <span class="pl-en">man</span> {</td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code js-file-line"><span class="pl-k">namespace</span> <span class="pl-en">vision</span> {</td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code js-file-line"><span class="pl-k">class</span> <span class="pl-en">Fool</span> {</td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code js-file-line"><span class="pl-k">public:</span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code js-file-line">    <span class="pl-en">Fool</span>(<span class="pl-k">double</span> value_) : value(value_) {}</td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code js-file-line">    <span class="pl-k">double</span> <span class="pl-en">get</span>() <span class="pl-k">const</span> { <span class="pl-k">return</span> value; }</td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code js-file-line">    <span class="pl-k">inline</span> Fool <span class="pl-k">operator</span>&amp;(<span class="pl-k">const</span> Fool&amp; f) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code js-file-line">    <span class="pl-k">inline</span> Fool <span class="pl-k">operator</span>|(<span class="pl-k">const</span> Fool&amp; f) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code js-file-line">    <span class="pl-k">inline</span> Fool <span class="pl-k">operator</span>!() <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code js-file-line"><span class="pl-k">private:</span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code js-file-line">    <span class="pl-k">double</span> value;</td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code js-file-line">};</td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code js-file-line"><span class="pl-k">inline</span> Fool Fool::<span class="pl-k">operator</span>&amp;(<span class="pl-k">const</span> Fool&amp; f) <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">Fool</span>(<span class="pl-c1">std::min</span>(f.<span class="pl-c1">get</span>(), <span class="pl-c1">get</span>()));</td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code js-file-line"><span class="pl-k">inline</span> Fool Fool::<span class="pl-k">operator</span>|(<span class="pl-k">const</span> Fool&amp; f) <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">Fool</span>(<span class="pl-c1">std::max</span>(f.<span class="pl-c1">get</span>(), <span class="pl-c1">get</span>()));</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code js-file-line"><span class="pl-k">inline</span> Fool Fool::<span class="pl-k">operator</span>!() <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">Fool</span>(<span class="pl-c1">1</span> - <span class="pl-c1">get</span>());</td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code js-file-line"><span class="pl-k">class</span> <span class="pl-en">FuzzyThreshold</span> {</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code js-file-line"><span class="pl-k">public:</span></td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code js-file-line">    <span class="pl-en">FuzzyThreshold</span>(<span class="pl-k">double</span> t0_, <span class="pl-k">double</span> t1_) : t0(t0_), t1(t1_) {}</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">double</span> <span class="pl-en">weight</span>(<span class="pl-k">double</span> x) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code js-file-line"><span class="pl-k">private:</span></td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code js-file-line">    <span class="pl-k">double</span> t0;</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code js-file-line">    <span class="pl-k">double</span> t1;</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code js-file-line">};</td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code js-file-line"><span class="pl-c">// TODO could be made more efficient, in particular are std::max and std::min efficient?</span></td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code js-file-line"><span class="pl-k">inline</span> <span class="pl-k">double</span> <span class="pl-en">FuzzyThreshold::weight</span>(<span class="pl-k">double</span> x) <span class="pl-k">const</span></td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code js-file-line">    <span class="pl-k">if</span> (t0 == t1)</td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code js-file-line">        <span class="pl-k">return</span> (x &gt;= t0 ? <span class="pl-c1">1</span>. : <span class="pl-c1">0</span>.);</td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">std::min</span>(<span class="pl-c1">std::max</span>((x - t0) / (t1 - t0), <span class="pl-c1">0</span>.), <span class="pl-c1">1</span>.);</td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code js-file-line"><span class="pl-k">inline</span> Fool <span class="pl-k">operator</span>&gt;(<span class="pl-k">double</span> x, <span class="pl-k">const</span> FuzzyThreshold&amp; thr)</td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code js-file-line">    <span class="pl-k">return</span> <span class="pl-c1">Fool</span>(thr.<span class="pl-c1">weight</span>(x));</td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code js-file-line"><span class="pl-k">inline</span> Fool <span class="pl-k">operator</span>&lt;(<span class="pl-k">double</span> x, <span class="pl-k">const</span> FuzzyThreshold&amp; thr)</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code js-file-line">{</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code js-file-line">    <span class="pl-k">return</span> !(x &gt; thr);</td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code js-file-line">}</td>
      </tr>
</table>

  </div>

</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links right">
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2015 <span title="0.06697s from github-fe141-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact</a></li>
    </ul>
  </div>
</div>


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-suggester-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents" placeholder=""></textarea>
      <div class="suggester-container">
        <div class="suggester fullscreen-suggester js-suggester js-navigation-container"></div>
      </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    
    

    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-x flash-close js-ajax-error-dismiss" aria-label="Dismiss error"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-2c8ae50712a47d2b83d740cb875d55cdbbb3fdbccf303951cc6b7e63731e0c38.js"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-804adb79f3a6f823f0d3d1368cf1119308457f0516e6a674c45227c4d1cf583d.js"></script>
      
      

  </body>
</html>

