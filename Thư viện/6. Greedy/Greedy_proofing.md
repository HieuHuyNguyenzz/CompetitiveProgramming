# Chứng minh tính đúng đắn của một thuật toán Tham lam
Dịch từ: https://web.stanford.edu/class/archive/cs/cs161/cs161.1138/handouts/120%20Guide%20to%20Greedy%20Algorithms.pdf

# Tính đúng đăn của một thuật toán tham lam
Khi bạn cố gắng viết một chứng minh cho việc một thuật toán tham lam là đúng, bạn thường cần phải chứng minh hai kết quả khác nhau. 
Trước hết, bạn cần phải chứng minh rằng thuật toán của bạn tạo ra một giải pháp khả thi, một giải pháp cho bài toán tuân theo các ràng buộc. 
Tiếp theo, bạn cần phải chứng minh rằng thuật toán của bạn tạo ra một giải pháp tối ưu, một giải pháp tối đa hoặc tối thiểu hóa lượng thích hợp.

Trong phạm vi bài viết này, có hai kỹ thuật chứng minh thuật toán thường được sử dụng, đó là:
- Kỹ thuật tham lam ưu tiên (greedy stays ahead)
- Các lập luận thay đổi (exchange arguments)

# Kỹ thuật tham lam ưu tiên
Kiểu chứng minh này hoạt động bằng cách chứng minh rằng, theo một độ đo nào đó, thuật toán tham lam luôn ít nhất bằng giải pháp tối ưu trong mỗi vòng lặp của thuật toán. 
Khi bạn đã thiết lập được điều này, bạn có thể sử dụng sự thật này để chứng minh rằng thuật toán tham lam phải là tối ưu.
Thông thường, bạn sẽ cấu trúc một lập luận trong bốn bước như sau:
- Xác định Solution: Thuật toán của bạn sẽ tạo ra một đối tượng X nào đó và bạn thường sẽ so sánh nó với giải pháp tối ưu X*.
- Xác định phép đo: Mục tiêu của bạn là tìm một loạt các độ đo mà bạn có thể sử dụng để đo lường giải pháp của bạn và giải pháp tối ưu.
- Xác định một loạt các độ đo m₁(X), m₂(X),..., mₙ(X) sao cho m₁(X*), m₂(X*),..., mₖ(X*) cũng được xác định cho một số lựa chọn của m và n. Lưu ý rằng có thể có một số lượng độ đo khác nhau cho X và X*, vì bạn không thể giả định ở điểm này rằng X là tối ưu.
- Chứng minh: Chứng minh rằng mi(X) ≥ mi(X*) hoặc mi(X) ≤ mi(X*), tùy vào trường hợp, đối với tất cả các giá trị hợp lý của i. Lập luận này thường được thực hiện theo cách quy nạp.
- Chứng minh tính tối ưu: Sử dụng sự thật rằng kỹ thuật này chứng minh rằng thuật toán tham lam phải tạo ra một giải pháp tối ưu. Lập luận này thường được thực hiện thông qua phản chứng bằng cách giả định rằng giải pháp tham lam không phải là tối ưu và sử dụng sự thật rằng "tham lam luôn vượt trước" để dẫn đến một mâu thuẫn.

Thách thức thường gặp khi chứng minh theo phương pháp này đó chính là lựa chọn phép đo phù hợp:
- Phép đo được lựa chọn chắc chắn phải có thể sử dụng để tìm ra giải pháp tối ưu.
- Kích thước của kết quả sử dụng tham lam và tối ưu là khác nhau. Do đó cần chắc chắn rằng phép đo không cố gắng chứng minh thuật toán theo cùng một khung kích thước
- Mục tiêu là chứng minh rằng giải pháp tham lam ít nhất là tốt như giải pháp tối ưu, không nhất thiết phải tốt hơn giải pháp tối ưu.

# Lập luận trao đổi
Phương pháp này hoạt động bằng cách chứng minh rằng bạn có thể chuyển đổi từng bước một mọi giải pháp tối ưu thành giải pháp được tạo ra bởi thuật toán tham lam mà không làm thay đổi chi phí của giải pháp tối ưu, từ đó chứng minh rằng giải pháp tham lam là tối ưu.

Thông thường, bạn sẽ cấu trúc một lập luận trong bốn bước như sau:
- Định nghĩa solution: Bạn sẽ so sánh giải pháp tham lam X với giải pháp tối ưu X*, vì vậy nên xác định rõ những biến này một cách rõ ràng.

- So sánh solution: Tiếp theo, chứng minh rằng nếu X ≠ X*, thì chúng phải khác nhau một cách nào đó. Điều này có thể có nghĩa là có một phần của X không có trong X*, hoặc có hai phần tử trong X có thứ tự khác nhau so với X*, v.v. Bạn có thể muốn đặt tên cho những phần này.

- Hoán Đổi Các Phần: Chứng minh cách biến đổi X* bằng cách trao đổi một phần của X* với một phần của X. Thông thường, bạn sẽ sử dụng phần bạn đã mô tả ở bước trước. Sau đó, chứng minh rằng bằng cách làm như vậy, bạn không làm tăng/giảm chi phí của X* và do đó có một giải pháp tối ưu khác.

- Lặp Lại: Lập luận rằng bạn đã giảm số lượng sự khác biệt giữa X và X* bằng cách thực hiện hoán đổi, và thông qua việc lặp lại quá trình này, bạn có thể biến đổi X* thành X mà không ảnh hưởng đến chất lượng của giải pháp. Do đó, X phải là tối ưu.

  




