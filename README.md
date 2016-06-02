bazaarBot
=========

A simple agent-based free market simulator engine.

This engine consists of various "Agents" trading commodities, with emergent free-floating prices that rise and fall according to the laws of supply and demand.

The eventual goal is to create an open-source "Economics engine" for games and simulations, much like contemporary open-source "Physics engines."

Based on "[Emergent Economies for Role Playing Games](http://larc.unt.edu/techreports/LARC-2010-03.pdf)" by Jonathon Doran and Ian Parberry.

Source: [Procedural Content Generation](http://larc.unt.edu/ian/research/content/)

Building the example project
---------------------------

1. Read this: [Getting Started with OpenFL](http://www.openfl.org/documentation/setup/)
2. Install Haxe and OpenFL and everything according to the above instructions
3. Install the `hscript` library (a dependency of bazaarBot): `haxelib install hscript`
4. Clone this repo somewhere on your hard-drive, let's call that `path/to/bazaarbot`
5. On the command line type `haxelib dev bazaarbot path/to/bazaarbot` to add bazaarbot as a Haxe library.
6. Open a command-line, navigate to `path/to/bazaarbot/examples/doran_and_parberry`
7. Run `lime build flash` to compile for flash
8. Run `lime build windows` to compile for cpp/windows (or `lime build mac` or `lime build linux`, etc)
9. Run `lime build html5` to compile for html5
10. Binary executables will appear in the `Export/` folder
11. Substitute `lime test` instead of `lime build` if you want to build AND immediately run the result.

