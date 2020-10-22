
Debian
====================
This directory contains files used to package hccd/hcc-qt
for Debian-based Linux systems. If you compile hccd/hcc-qt yourself, there are some useful files here.

## hcc: URI support ##


hcc-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install hcc-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your hccqt binary to `/usr/bin`
and the `../../share/pixmaps/hcc128.png` to `/usr/share/pixmaps`

hcc-qt.protocol (KDE)

