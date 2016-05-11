# Bao_cao_gts
Giai Tich So 

Đề 5:
***Mô tả code***

A. Bài toán
Giải hệ phương trình đại số tuyến tính bằng phương pháp Gauss_Seidel.

B. I/O
Input:    +ma trận vuông vế trái A(hay la hệ số vế trái của hệ phương trình)
	         +ma trận vế phải B(hay hệ số vế phải của hệ phương trình)
	         +các giá trị ban đầu của x
Output:  +hiển thị trên màn hình giá trị x sau các vòng lặp
	         +Ghi giá trị nghiệm thỏa mãn điều kiện sai số vào file

C. Chương trình


Code gồm 4 phần chính:
  1.Đọc dữ liều đầu(input) vào từ file.
  2.Hiển thị input.
  3.Giải hệ phương trình.
  4.Hiển thị kết quả lên màn hình và ghi kết quả vào file.

Cụ thể:
  1.Đọc dữ liều đầu(input) vào từ file.
    +Xuất dữ liệu về ma trận vuông vế trái A(hay la hệ số vế trái của hệ phương trình) từ file
    + Xuất dữ liệu về ma trận vế phải B(hay hệ số vế phải của hệ phương trình) từ file
    + Xuất dữ liệu về các giá trị ban đầu của x từ file
  2. Hiển thị input: Hiển thị các giá trị đã xuất ở phần 1
  3.Giải hệ phương trình.
    +Sử dụng các công thức trong sách để tính giá trị x[i]
    +Sau mỗi vòng lặp  đánh giá sai số của các x[i] với sai số epsilon bài cho. Nếu thỏa mãn thì thoát khỏi vòng lặp.
  4.Hiển thị kết quả lên màn hình và ghi kết quả vào file.
    +Hiển thị các giá trị x[i] sau các vòng lặp
    +Xuất giá trị vòng lặp cuối cùng(thỏa mãn điều kiện sai số) vào file.

  Kết thúc chương trình

D. Lưu ý
Đọc kĩ hướng dẫn trước khi chạy Code (-->Huong_dan.txt)
