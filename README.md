# Weekly_Coding_Exercises
 Bài tập hàng tuần 
 Phần B - Tuần 7 ================================

 Bài B1.-----------------------

 *p3 = B, p3 = 0x5678
 *p3 = A, p3 = 0x1234
 *p1 = B, p1 = 0x1234

 Bài B2.------------------------
Đáp án: *p = 5.

Bài B3. -------------------------
Lỗi ở đây là kiểu con trỏ không tương thích kiểu vùng dữ liệu nó trỏ tới. Con trỏ lưu địa chỉ của 1 biến kiểu double, trong khi vùng dữ liệu trỏ tới chỉ lưu 1 byte dữ liệu đại diện cho 1 kí tự. Khi cố gán địa chỉ c cho p, chương trình sẽ ép kiểu địa chỉ 1 biến char thành con trỏ 1 số thực. Điều này là không an toàn / không xác định.
