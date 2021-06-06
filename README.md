# UEFI Bootable Space Invaders game

The create image is there for your convenience. I include the EXE and source code. The exe creates the drive.hdd file you need to put your UEFI program onto. I designed it so it is already setup with a GPT / EFI partition. Make sure you put BOOTX64.EFI into EFI/BOOT/ folder. It MUST have those exact names and capitalizations. In otherwords, you must create the folders. So you will have to mount it. In Linux there are tools for this. But in windows, I use OSFMount to mouse the drive.hdd file and then I copy the compiled BOOTX64.EFI onto it. The drive.hdd file boots in both QEMU and in VirtualBox.

Still in development. Coming soon...  
