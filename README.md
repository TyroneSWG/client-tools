# Client/Tools Repo

This repo is only for building the clients and tools. 

# Useful Changes Appreciated

If you make any useful changes or improvements, put in a pull request/merge request and I'll merge it in, and you'll become a contributor!

## Branches:

* **master** - Currently builds using Visual Studio 2013. Uses the old stlport.
* **stdlib** - Current "work in progress" for building on Visual Studio 2015, which includes it's own, complete STL implementation.
* **wolfssl** - A test branch where I (Darth) was trying to implement DTLS SSL to make the connection secure. Feel free to finish this implementation.
* **test** - I really don't remember what all I was up to on this branch, feel free to check the commit log.

## Visual Studio

Visual Studio Community for most, if not all versions, is free for 90 days, after which you may need to do something slightly illegal, unless you have DreamSpark: https://www.visualstudio.com/en-us/downloads/download-visual-studio-vs.aspx

## Building

To build a client, find and right click "SwgClient" after choosing the configuration you wish to use (Debug, Optimized, Release). Click build.

The same goes for the other projects but they are hit and miss as far as being working or not. If you hit a bug, please fix and pull request! It is suggested you ignore the "server" projects and server only libs as we have no use for those.

## Known Issues

* For the debug build, and possibly the optimized versions, you will get linker errors about libmozilla, and in release, possibly Vivox - if you alter the project settings you can disable this from killing the output of an exe, as libmozilla is only needed for the ingame browser.

* Other linker errors sometimes throw, you have to work on these case by case. Please pull request any changes you make.

* cmd.exe issues sometimes occur as SOE originally had the build setup copying files to a proper game bin directory. You can just remove these from projects that complain about them, just copy the output files manually.

* Plenty of warnings and sometimes even errors regarding deprecated libs happen. Fixes for these are case by case.

# Buy Darth A Caffinated Beverage

bitcoin:16e1QRRmnBmod3RLtdDMa5muKBGRXE3Kmh