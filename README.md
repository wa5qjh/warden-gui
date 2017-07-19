 warden-gui  from  pcbsd not certain which version but believe it is 10.3 

     First of all,  This is Kris Moore's fine work! Many Thanks!

 This directory will build warden-gui that works on ZFS only. this one has
 built under  FreeBSD11-CURRENT and produced a warden-gui  that will import old
 .wdn files successfully and run them in  TrueOS-12 after copying it there.
 Since I built it in a UFS filesystem, I have not been able to test it on the
 system it was built under. It is hoped that with some modification that it
 will be able to build new jails soon but currently that is hampered by where 
 it expects to find the  base sets ( base.txz, src.txz, ports.txz )
   That's just the problems I know of now.
  It does appear that compiling  this under FreeBSD11-CURRENT as I have, does
 install needed files in /usr/local/share/..   functions.sh  being the one
 that so far, I know of determining where it expects to find those sets.


Gary Corell
