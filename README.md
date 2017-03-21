# Windows API in PHP
#### Project made for VS 2017. DLL made for PHP 7.1.3 x64 VC14
You must have the Visual Studio 2017 (mine was Community version, which is free) and Windows SDK (mine was 10) installed.
## How to use DLL
1) Put `php_wapi.dll` in `php\ext`
2) In `php.ini` add line: `extension=php_wapi.dll`
## PHP pre-build

1) Download [PHP SDK TOOLS](http://windows.php.net/downloads/php-sdk/php-sdk-binary-tools-20110915.zip)
2) Unpack to `C:\phpsdk` (for example)
3) Start `x64 Native Tools Command Prompt for VS 2017`
4) Make:
```
cd C:\phpsdk
bin\phpsdk_setvars.bat
bin\phpsdk_buildtree.bat php7dev
```
5) Download [`php-7.1.3-src.zip`](http://windows.php.net/downloads/releases/php-7.1.3-src.zip) and unzip it to `php7dev\vc14\x64\`
6) Download [`deps-7.1-vc14-x64.7z`](http://windows.php.net/downloads/php-sdk/deps-7.1-vc14-x64.7z) and unzip it to `C:\phpsdk`
7) Make:
```
cd php7dev\vc14\x64\php-7.1.*
buildconf
configure --disable-all --enable-cli
```
8) Go to `php7dev\vc14\x64\php-7.1*\main` and open `config.w32.h` with notepad
9) Change all `VC15` to `VC14` and `Visual C++ 2017` to `Visual C++ 2015`
## VS Project
1) Copy folder `php7dev\vc14\x64\php-7.1*` to `C:\` and rename to `php-src` (or you can change project Properties and select your folder in Properties -> C/C++ -> General).
2) Change to `Release|x64` and Build.
3) The output DLL will be saved to `C:\php\ext`
### PHP commands should be like:
```
wapi_screenshot('image.bmp',100,100,50,50); //path, left, top, width, height
wapi_screenshot('image.bmp',0,0,0,0); //path, fullscreen
wapi_get_clipboard(); //return clipboard string of windows
wapi_set_clipboard("hello");
wapi_mouse_event(MOUSE_LEFTDOWN,0,0,0,0); //or LEFTUP, MIDDLEUP, ETC
wapi_sendkeys("Hello World!{enter}");
wapi_set_cursor_pos(100,255);
wapi_get_cursor_pos(); //return string "X;Y"
wapi_get_key_state(VK_A);
wapi_dialog('open');
wapi_dialog('save');
```
#### Thanks to [gerbernhardt](https://github.com/gerbernhardt) for this extension. You have to check [his repo](https://github.com/gerbernhardt/php_wapi) for code updates.
