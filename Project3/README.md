
# Mục đích : 
- Làm quen với PlatformIO
- Làm quen với Git, Github
  
# Phần cứng 
Trong dự án này, em sử dụng board phát triển ESP32 Devkit v1:

# Yêu cầu chức năng 
Chương trình có chức năng sau:
  - Chỉ sử dụng nút bấm trên để thực hiện chức năng điều khiển hai LED (một cái là built-in trên devboard)
  - Khi double click sẽ chuyển chế độ điều khiển giữa hai LED (LED1 và LED2)
  - Khi single click sẽ bật tắt cái LED đang được điều khiển (LED1 hoặc 2, đã chọn ở bước 1)

# Các công cụ trong `workspace` này
- Sử dụng thư viện OneButton (open source lib) để đạt chức năng tương tự. Xem chi tiết hướng dẫn trong `OneButton_Lib_Demo/README.md`
- Sử dụng các thư viện tự phát triển 