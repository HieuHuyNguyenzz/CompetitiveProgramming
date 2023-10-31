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
- Xác định Solution Của Bạn: Thuật toán của bạn sẽ tạo ra một đối tượng X nào đó và bạn thường sẽ so sánh nó với giải pháp tối ưu X*.
- Xác định phép đo: Mục tiêu của bạn là tìm một loạt các độ đo mà bạn có thể sử dụng để đo lường giải pháp của bạn và giải pháp tối ưu.
- Xác định một loạt các độ đo m₁(X), m₂(X),..., mₙ(X) sao cho m₁(X*), m₂(X*),..., mₖ(X*) cũng được xác định cho một số lựa chọn của m và n. Lưu ý rằng có thể có một số lượng độ đo khác nhau cho X và X*, vì bạn không thể giả định ở điểm này rằng X là tối ưu.
- Chứng minh: Chứng minh rằng mi(X) ≥ mi(X*) hoặc mi(X) ≤ mi(X*), tùy vào trường hợp, đối với tất cả các giá trị hợp lý của i. Lập luận này thường được thực hiện theo cách đệ quy.

Chứng minh Tối Ưu: Sử dụng sự thật rằng "tham lam luôn vượt trước," chứng minh rằng thuật toán tham lam phải tạo ra một giải pháp tối ưu. Lập luận này thường được thực hiện thông qua phản chứng bằng cách giả định rằng giải pháp tham lam không phải là tối ưu và sử dụng sự thật rằng "tham lam luôn vượt trước" để dẫn đến một mâu thuẫn.
