#ifndef PHP_WAPI_H
 #define PHP_WAPI_H 1
 #define PHP_WAPI_VERSION "1.0"
 #define PHP_WAPI_EXTNAME "wapi"

 extern zend_module_entry wapi_module_entry;
 #define phpext_wapi_ptr &wapi_module_entry
 PHP_FUNCTION(wapi_screenshot);
 PHP_FUNCTION(wapi_get_window);
 PHP_FUNCTION(wapi_set_window);

 PHP_FUNCTION(wapi_get_list_process_id);
 PHP_FUNCTION(wapi_get_window_process_id);
 PHP_FUNCTION(wapi_open_process);
 PHP_FUNCTION(wapi_close_process);
 
 PHP_FUNCTION(wapi_close_handle);
 
 PHP_FUNCTION(wapi_suspend_process);
 PHP_FUNCTION(wapi_resume_process);

 PHP_FUNCTION(wapi_read_process_memory);
 PHP_FUNCTION(wapi_write_process_memory);

 PHP_FUNCTION(wapi_get_window_text);
 PHP_FUNCTION(wapi_set_window_text);
 
 PHP_FUNCTION(wapi_get_clipboard);
 PHP_FUNCTION(wapi_set_clipboard);
 
 PHP_FUNCTION(wapi_mouse_event);
 PHP_FUNCTION(wapi_set_cursor_pos);
 
 PHP_FUNCTION(wapi_sendkeys);
 
 PHP_FUNCTION(wapi_get_cursor_pos);
 PHP_FUNCTION(wapi_get_key_state);
 
 PHP_FUNCTION(wapi_dialog);
 
 PHP_FUNCTION(wapi_serial_connect);
 PHP_FUNCTION(wapi_serial_write);
 PHP_FUNCTION(wapi_serial_read);
 PHP_FUNCTION(wapi_serial_is_connected);
 PHP_FUNCTION(wapi_test);
#endif