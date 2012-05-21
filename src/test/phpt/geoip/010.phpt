--TEST--
Checking for out of bound type with geoip_database_info()
--SKIPIF--
<?php if (!extension_loaded("geoip")) print "skip"; ?>
--FILE--
<?php

geoip_database_info(-1000);
geoip_database_info(1000);

?>
--EXPECTF--
HipHop Warning:  Database type given is out of bound. in /home/daniel/tuenti/hiphop-php/src/test/phpt/file on line 3
HipHop Warning:  Database type given is out of bound. in /home/daniel/tuenti/hiphop-php/src/test/phpt/file on line 4
