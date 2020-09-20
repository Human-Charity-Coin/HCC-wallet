
Debian
====================
This directory contains files used to package human-charity-coind/human-charity-coin-qt
for Debian-based Linux systems. If you compile human-charity-coind/human-charity-coin-qt yourself, there are some useful files here.

## human-charity-coin: URI support ##


human-charity-coin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install human-charity-coin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your human-charity-coinqt binary to `/usr/bin`
and the `../../share/pixmaps/human-charity-coin128.png` to `/usr/share/pixmaps`

human-charity-coin-qt.protocol (KDE)

