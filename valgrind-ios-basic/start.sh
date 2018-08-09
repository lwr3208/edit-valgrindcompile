#!/bin/sh
 
./autogen.sh && ./configure CPPFLAGS="-arch armv7 -isysroot $(xcrun --sdk iphoneos --show-sdk-path)" \
 LDFLAGS="-arch armv7 -isysroot $(xcrun --sdk iphoneos --show-sdk-path)" \
 --prefix=/Users/lee/Desktop/NSR/DBI/installed \
 --host=armv7-unknown-darwin --with-iosver=8.4.1 && sudo make && sudo make install
