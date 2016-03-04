ua_parser C++ Library
=====================

Usage
-----

To build the (static) library:

    $ make uaparser_cpp

To build and run the tests:

    $ make test

To build a stream parser:
    $ make UaParser

Dependencies
------------

* boost_regex, boost_system, yaml-cpp (0.3 API)
* glog (for the `CHECK` macro)
* gtest (for testing)

Author:
-------

  * Alex Şuhan <alex.suhan@gmail.com>
  * Xingang Wang <itismewxg@gmail.com>

  Based on the D implementation by Shripad K and using agent data from BrowserScope.
