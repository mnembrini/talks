# 3ap Meetup Hacking Fundamentals: Buffer Overflows 13.02.2019 18.00


The talk is going to be split in 3 parts:

- introduction and explanation basic buffer overflow

- buffer overflow exercise

- mitigations and more advanced techniques

If you want to try for yourself, bring a laptop with you and follow the setup.

Please do step 1 and 2 before the talk, if everyone is downloading 5 GB of windows VM the wifi will be very slow :) 

## Setup instructions

1. If you have a windows machine, go to step 3

2. On Mac OS or Linux, we are going to setup a Windows Virtual Machine.
    - Download Virtualbox from https://www.virtualbox.org/wiki/Downloads
    - Download a free Windows VM image from https://developer.microsoft.com/en-us/microsoft-edge/tools/vms/ 
    ( select "MSEdge on Win10 (x64) Stable and Platform Virtualbox). If you already have another Hypervisor 
    you can also use that.
    - Install Virtualbox, unzip the Window VM image and double click the .ova file in the zip. This will start the 
    import of the image: click through the wizard
    - Try to start the VM from Virtualbox: if it does not work you might have to enable Virtualization in your BIOS
    - Install the Guest Additions inside the VM (Top menu: Devices -> Install Guest Additions CD). This will make the screen resizable and 
    support bidirection copy-paste (enable from Devices -> Shared Clipboard -> Bidirectional)
    - Continue to step 3 from inside the VM
    
3. Download the free Digital Mars C compiler from http://ftp.digitalmars.com/Digital_Mars_C++/Patch/dm857c.zip
and extract to C:\talk\tools\dm
4. Download the latest x64dbg (open source) https://sourceforge.net/projects/x64dbg/files/snapshots/snapshot_2019-01-20_22-50.zip/download
and extract to C:\talk\tools\x64dbg