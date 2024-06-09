MEG-4
=====

[MEG-4](https://bztsrc.gitlab.io/meg4) (pronouned as "MEGA", *ˈmegə*) is my take on the virtual fantasy game console genre, similar
to PICO-8 and TIC-80, but simpler to use, lot more featureful, and *much more* performant. So **it is actually fun** to use :-)
You can find more details, example floppies and an emulator running in your browser on the [website](https://bztsrc.gitlab.io/meg4).

To get the feeling: if those other consoles were the NES, then MEG-4 would be the Amiga. :-)

Installation
------------

This is not all, just the ones I provide as binary release too. Check out the [platform](platform) directory for more!

| Platform   | Link                                                                                                           |
|------------|----------------------------------------------------------------------------------------------------------------|
| Windows    | [meg4-i686-win-sdl.zip](https://gitlab.com/bztsrc/meg4/raw/binaries/meg4-i686-win-sdl.zip)                     |
| Linux      | [meg4-x86_64-linux-sdl.tgz](https://gitlab.com/bztsrc/meg4/raw/binaries/meg4-x86_64-linux-sdl.tgz)<br>[meg4-x86_64-linux-glfw.tgz](https://gitlab.com/bztsrc/meg4/raw/binaries/meg4-x86_64-linux-glfw.tgz)<br>[meg4-x86_64-linux-fbdev.tgz](https://gitlab.com/bztsrc/meg4/raw/binaries/meg4-x86_64-linux-fbdev.tgz) |
| Ubuntu     | [meg4_0.0.1-amd64.deb](https://gitlab.com/bztsrc/meg4/raw/binaries/meg4_0.0.1-amd64.deb)                       |
| RaspiOS    | [meg4_0.0.1-armhf.deb](https://gitlab.com/bztsrc/meg4/raw/binaries/meg4_0.0.1-armhf.deb)                       |
| Web        | [meg4-wasm-emscripten.zip](https://gitlab.com/bztsrc/meg4/raw/binaries/meg4-wasm-emscripten.zip)               |
| MEG-4 OS   | [meg4-x86_64.iso.tgz](https://gitlab.com/bztsrc/meg4/raw/binaries/meg4-x86_64.iso.tgz)                         |

Extract to: `/usr` (Linux, BSDs), `C:\Program Files` (Windows); or in a webserver's public folder (Emscripten).

This is a portable executable, no installation required. Alternatively if you've downloaded a deb file then you can install that with

```
sudo dpkg -i meg4_*.deb
```

The [MEG-4 OS](platform/baremetal) is a bare metal solution, which does not need any Operating System. You can flash that .iso to a
storage and boot it, or you can try it out in a virtual machine with

```
qemu-system-x86_64 -m 256 -drive file=meg4.iso,format=raw -device virtio-mouse -serial stdio
```

Compilation
-----------

Go into one of the subdirectories under [platform](https://gitlab.com/bztsrc/meg4/tree/main/platform) and run `make`. Yeah, it
is really that simple. Some Makefiles have additional rules to download optional libraries and compile those statically in, but
a plain simple `make` will always work.

The build system is created in a way that you can simply remove or add repo directories to enable or disable features. For
example just rename `src/lua` to `src/lua.disabled` to remove Lua support (and cut overall compilation time in half). Having
`platform/sdl/SDL3` will statically link with SDL3, rename it to `SDL3.disabled` to link dynamically.

Documentation
-------------

- [MEG-4 User's Manual](https://bztsrc.gitlab.io/meg4/manual_en.html)
- [MEG-4 API reference](https://bztsrc.gitlab.io/meg4/manual_en.html#memory_map) (to be used by your programs)
- libmeg4.a [library API reference](docs/API.md) (for "platform" apps integrating the MEG-4 emulator)

File Formats
------------

MEG-4 stores programs in "[floppy disks](docs/floppy.md)". These are simple PNG images with additional data. For convenience,
there's also a project format, which is an archive file containing the console's data in only common and well-known Open Source
[file formats](docs/en/formats.md), usable by many third party tools (one of the test cases, the [converter](tests/converter)
can convert PNG floppies into this project archive format from command line).

Otherwise lots of other formats are supported, among others Tiled maps, MIDI music, PICO-8 and TIC-80 cartridges, etc. Just
drag'n'drop these files to the MEG-4 screen to import.

License
-------

The MEG-4 virtual fantasy console is a Free and Open Source software, licensed under *GPLv3* or any later version of that license.

MEG-4 PRO
---------

The proprietary MEG-4 PRO version offers extra functionality over the GPL'd version: it stores the author's name into the floppies,
and it can also *export a standalone WebAssembly* binary with just your game in it, without the built-in editors. These look like
genuine games, no-one can tell they were created with MEG-4 (assuming your game doesn't crash because the error screen will tell).

Contributors
------------

I would like to say thanks to [Mátyás Jani](https://gitlab.com/jzombi) for thorough testing and making suggestions on useful
features, and [Tony Wang](https://github.com/paladin-t) for the Chinese, [nics_le](https://gitlab.com/nics_le) for the German,
and [Openovchik](https://gitlab.com/openovchik) for the Russian translation fixes!

Social and Newsroom
-------------------

- [Hacker News](https://news.ycombinator.com/item?id=36358952)
- [Raspberry Pi Forum](https://forums.raspberrypi.com/viewtopic.php?t=353261)
- [OpenGameArt](https://opengameart.org/forumtopic/meg-4)
- [Softpedia](https://www.softpedia.com/get/Gaming-Related/MEG-4.shtml)
- [AlternativeTo](https://alternativeto.net/software/meg-4/about/)
- [Slant](https://www.slant.co/topics/17727/viewpoints/15/~fantasy-consoles~meg-4)
- [EnginesDatabase](https://enginesdatabase.com/engine/meg4/)
- [Fantasy Console Wiki](https://fantasyconsoles.org/) (on [github](https://paladin-t.github.io/fantasy/))
- [Hungarian UNIX Portal](https://hup.hu/node/182149) (non-English)

Mirrors
-------

- [gitlab](https://gitlab.com/bztsrc/meg4)
- [github](https://github.com/relector-tuxnix/meg4/)
- [codeberg](https://codeberg.org/bzt/meg4)

Known Bugs
----------

Hopefully none. Please use the [issue tracker](https://gitlab.com/bztsrc/meg4/issues) if you find any.

Should compile and work on big-endian machines too (I mean, in theory all the necessary htoleX and leXtoh macros are in place, but
in practice I probably missed a few spots). Since there's exactly zero big-endian machines in my vicinity, this is totally untested.

To avoid dependencies and provide proper integration, the C and BASIC compilers were implemented by me from scratch. Should you
find any issues with these languages, please report it.

On the other hand Lua is 3rd party. Most of its error messages aren't and can't be translated, and the faulting line might be
correctly returned, or might be not; it also might segfault and crash MEG-4... These aren't bugs in MEG-4. *Do not* report these.
I surely could, but it's not my job to fix Lua. Address your complaints to Pontifical Catholic University of Rio de Janeiro. On
the other hand contributions for Lua workarounds are always welcome.

To Do
-----

- Undo / Redo works everywhere except I had to remove history in the Sounds and Music Editors (I'll have to come up with some clever
  history compression algorithm because it eats up the entire memory pretty quickly otherwise). Undo in the Wave Editor works though.

- Sprite, Map and Font Editors have plenty of sophisticated tools already, but they currently lack "draw line". I'll probably add
  this soon with <kbd>Shift</kbd> + Paint, just like in GIMP.

- Visual Editor is unfinished (see [TirNanoG Editor](https://tirnanog.codeberg.page/images/tnge5.png)'s event handlers to get a
  glimpse of what I'm planning here).

- struct/union support in the C compiler

- ELSEIF and SELECT CASE in the BASIC compiler

- the BASIC compiler isn't as throughfully tested (yet) as the C compiler

- most of the built-in helps are machine translated, they really could use some fix from a native speaker contributor

Cheers,
bzt
