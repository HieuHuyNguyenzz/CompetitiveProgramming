# Chặt nhị phân (Binary Search)
Tìm kiếm nhị phân (hay còn gọi là chặt nhị phân) là một trong số các thuật toán cơ bản của khoa học máy tính, được sử dụng làm nền tảng của nhiều thuật toán khác. 

Bài toán: Cho một danh sách a[0..n] chứa các phần tử có cùng kiểu dữ liệu và một giá trị x có cùng kiểu dữ liệu với các phần tử trong a. Ta cần tìm một vị trí i trong a sao cho a[i] = x hoặc trả về -1 nếu không tìm được phần tử thỏa mãn.

## 1. Tìm kiếm tuyến tính (Linear Search hoặc Sequential Search)
Trước khi đi vào chi tiết thuật toán tìm kiếm nhị phân, hãy xét cách tìm kiếm thông thường đó là tìm kiếm tuyến tuyến tính:

Ý tưởng: Thuật toán hoạt động bằng cách duyệt từng phần tử từ trái sang phải, dần dần cho đến khi tìm được phần tử mong muốn. Nếu duyệt hết mảng mà không tìm được phần tử mong muốn thì trả về -1. 

Một số đặc điểm của thuật toán:
- Không đòi hỏi thứ tự xác định
- Độ phức tạp tổng quát của thuật toán là O(n), do chúng ta cần phải duyệt tuần tự mảng.
- Làm việc được với cấu trúc Linked List

Cài đặt: khá đơn giản, chỉ cần 1 vòng for:
'''cpp

## 2. Tìm kiếm nhị phân (Binary Search)
