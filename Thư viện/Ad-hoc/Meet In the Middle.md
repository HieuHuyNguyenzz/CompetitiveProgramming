# Meet In the Middle

Meet in the Middle hay chia đôi tập là một kỹ thuật thường được sử dụng để tối ưu thuật toán Backtracking. Phương pháp này dựa trên việc chia đôi tập thành 2 phần, thực hiện một phép tìm kiếm trên mỗi phần của tập rồi ghép kết quả của 2 phép tìm kiếm để tạo ra kết quả cuối cùng.

## Ý tưởng
Giả sử với một bài toán có thể sử dụng quay lui để giải quyết tuy nhiên phương pháp này thường không đủ nhanh do độ phức tạp là $m^n$ với n là số phần tử của tập còn m là số lựa chọn đối với mỗi phần tử, việc sử dụng kỹ thuật chia đôi tập sẽ có thể giảm độ phức tạp xuống $m^ {n/2}$.

Kỹ thuật có thể được mô tả như sau:

Input: một mảng a gồm n phần tử, yêu cầu tìm tập con trong hay đếm trong tập a thỏa mãn một điều kiện nào đó.

- Đầu tiên chúng ta sẽ chia tập ban đầu thành 2 phần bằng nhau, mỗi phần chứa n/2 phần tử.
- Thực hiện cùng một phép tìm kiếm/tính/đếm trên mỗi tập. Thông thường ở đâu thường thực hiện phép quay lui trên mỗi nửa tập với độ phức tạp $m^ {n/2}$. Tổng độ phức tạp ở bước này sẽ là O(2. $m^ {n/2}$)
- Sau khi đã thực hiện phép tìm kiếm trên 2 tập, chúng ta cần phải thực hiện việc ghép 2 tập để tạo ra tập cuối cùng. Đây là giai đoạn quan trọng nhất của kỹ thuật này. Để kỹ thuật có thể đạt được tốc độ tốt hơn sử dụng quay lui thì bước này thường sẽ sử dụng các kỹ thuật có độ phức tạp O(nlogn) để tối ưu hóa như tìm kiếm nhị phân, sắp xếp, ...

Thông thường các bài toán có thể áp dụng kỹ thuật này thường là các bài toán yêu cầu tìm kiếm một tập con từ tập ban đầu thỏa mãn một điều kiên. Với loại bài toán này thì mỗi vật có 2 loại lựa chọn là chọn hoặc không chọn. Do vậy độ phức tạp tổng quát của bài toán sẽ là
O($2^ {n/2}$) = O($\sqrt{2^{n}}$)

## Ví dụ
Ví dụ điển hình nhất trong bài toán như sau:

Link nộp bài: [CSES - Meet in the Middle](https://cses.fi/problemset/task/1628)

Cho mảng t có N phần tử. Hỏi có bao nhiêu cách chọn tập con sao cho tổng bằng x.

Giới hạn:

- 1≤N≤40
- 1≤x≤109
- 1≤ti≤109

Lời giải:
[https://vnoi.info/wiki/algo/basic/meet-in-the-middle.md]
