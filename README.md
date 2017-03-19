# Windows API in PHP
#### Project made for VS 2017. DLL made for PHP 7.1.3 VC14
## How to use DLL
1) Put `php_wapi.dll` in `php\ext`
2) In `php.ini` add line: `extension=php_wapi.dll`
## VS Project
You must have the Visual Studio 2017 installed (mine was Community version, which is free).
1) Download [`php-7.1.3-src.zip`](http://windows.php.net/downloads/releases/php-7.1.3-src.zip) and unzip it to `C:\php-src` (or you can change project Properties and select your folder in Properties -> C/C++ -> General).
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
