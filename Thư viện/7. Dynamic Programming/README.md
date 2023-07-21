# Quy hoạch động (Dynamic Programming)

Quy hoạch động là một trong những thuật toán quan trọng nhất trong lập trình thi đấu, có thể bao quát một số lượng rất lớn các bài toán. Quy hoạch động được ưu thích vì nó chỉ có độ phức tạp đa thức - hoạt động ổn trong hầu hết các trường hợp.

## Tư tưởng chính
Tư tưởng chính của quy hoạch động đó là chia nhỏ bài toán thành các bài toán con sau đó kết hợp các kết quả để giải bài toán lớn. Tuy nhiên tư tưởng này có thể dễ dàng bị nhầm lẫn sang tư tưởng của chia để trị hay đệ quy có nhớ. Sự khác biệt của quy hoạch động đó là nó sẽ thực hiện một vòng lặp, ở mỗi vòng lặp sẽ giải quyết một bài toán con và lưu lại các kết quả các bài toán con này vào một bảng. Bản chất của quy hoạch động là đây là một thuật toán Bottom-up, tức là tính toán dần từ bài toán nhỏ nhất dần cho đến bài toán lớn. 

Quy hoạch động được sử dụng khi ta tìm được công thức liên hệ giữa kết quả bài toán có đầu vào cho trước với một (hoặc một số) bài toán con tương tự nhưng có đầu vào nhỏ hơn. Khi ta biết được một số trạng thái bắt đầu của bài toán, nói cách khác - bài toán con với những đầu vào rất nhỏ, ta có thể sử dụng QHĐ để tính ra kết quả cuối cùng.

Độ phức tạp: Do thuật toán sẽ tính n bài toán và lưu các kết quả vào một bảng nên độ phức tạp của Quy hoạch động thường là độ phức tạp đa thức.

## Trạng thái của bài toán
Khi giải một vấn đề sử dụng quy hoạch động, cần quan tâm đến một vấn đề, đó là <strong>trạng thái</strong> của bài toán.

Trạng thái là một trường hợp, một bài toán con của bài toán lớn. Để giải bài toán quy hoạch động, điều quan trọng nhất là tìm ra mối liên hệ giữa một trạng thái và các trạng thái có tham số nhỏ hơn (gọi là công thức truy hồi)

## Các dạng bài quy hoạch động
- Đếm (Counting)
- KnapSack
- Tree
- Digit
- Bitmasking

# Tổng kết
Trích "Phân tích về QHĐ - Thầy Lê Minh Hoàng"

Nguồn: https://vnoi.info/wiki/algo/dp/thac-mac-ve-qhd.md

Bạn cứ hiểu quy hoạch động là quy hoạch động. Đừng quan tâm đến cách thức lưu trữ (một chiều, hai chiều, rời rạc…), cũng đừng quan tâm tới thứ tự tính toán (quét ngang, băm chéo, trên cây, trên DAG, trên đường, dưới ao…) thì sẽ thấy vấn đề là do dân competitive programmers tự thêm thuật ngữ mới vào, chứ bản chất rất đơn giản:

Dynamic Programming = Solving Recurrence + Memoization

Nói như vậy mọi bài QHĐ đều phải tìm cách xác định bài toán, tức là không gian các x = các trạng thái của nó.

Những chuyện xử lý bit, nén, … là encoding, nó là kỹ thuật cơ bản không liên quan gì tới QHĐ hết mà chỉ dùng để mã hóa bài toán. Những chuyện DFS, Topological Sorting cũng là để xác định thứ tự tính, chứ không phải đặc trưng của QHĐ. Bạn nên coi các cái này là kỹ thuật bổ trợ nhằm tăng tính hiệu quả của phép cài đặt mà thôi. 
