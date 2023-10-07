# Kỹ thuật 2 con trỏ (Two pointers)
Phương pháp hai con trỏ là một kỹ thuật sử dụng cùng lúc 2 con trỏ lặp trên một mảng. Kỹ thuật này thường được dùng khi nó cần tìm một cặp giá trị nào đó trên một mảng mà giúp góp phần thỏa mãn một điều kiện nào đó hoặc là tối ưu một giá trị nào đó. Việc tìm kiếm cặp giá trị này bằng cách cơ bản có thể tìm bằng cách duyệt toàn bộ các cặp phần tử với độ phức tạp O($n^2$). Thay vào đó kỹ thuật này có thể giảm độ phức tạp xuống còn O(n).

Có hai biến thường được sử dụng trong kỹ thuật hai con trỏ:

- Con trỏ hoặc chỉ số bắt đầu (left pointer/index): Con trỏ này hoặc chỉ số thường được đặt tại vị trí ban đầu của dãy dữ liệu.

- Con trỏ hoặc chỉ số kết thúc (right pointer/index): Con trỏ này hoặc chỉ số thường được đặt tại vị trí cuối cùng của dãy dữ liệu.

 Tuy nhiên cần lưu ý rằng không phải bài toán nào cũng có thể áp dụng hai con trỏ. Để có thể áp dụng được phương pháp này, bài toán cần thỏa mãn một trong số điều kiện sau tùy thuộc vào bài toán:
1. Dãy đã sắp xếp: Kỹ thuật hai con trỏ thường hiệu quả nhất khi dãy đã được sắp xếp theo một thứ tự cụ thể. Điều này cho phép bạn di chuyển hai con trỏ (hoặc chỉ số) từ hai phía và dừng lại khi gặp điều kiện cụ thể.

2. Tìm kiếm, cộng, hoặc trừ: Kỹ thuật này thường được sử dụng để tìm kiếm một giá trị cụ thể, tính tổng, hoặc thực hiện các phép toán tương tự. Điều kiện để dừng lại thường là sự so sánh giữa các giá trị.

3. Phạm vi hoặc khoảng: Khi bạn cần tìm một phạm vi hoặc khoảng thỏa mãn một điều kiện cụ thể (ví dụ: tổng trong khoảng cụ thể bằng một giá trị cho trước), kỹ thuật hai con trỏ thường hữu ích.

4. Các biến thể của bài toán hai con trỏ: Có nhiều biến thể khác nhau của kỹ thuật hai con trỏ, ví dụ như "Sliding Window," "Two Pointers for Sorted Array," và "Two Pointers for Unsorted Array," mà có điều kiện cụ thể cho phép áp dụng chúng.

5. Các vấn đề dựa trên vị trí tương đối: Kỹ thuật hai con trỏ thường được sử dụng khi bạn cần so sánh hoặc thao tác trên các phần tử trong mảng hoặc danh sách dựa trên vị trí tương đối của chúng.

6. Tìm kiếm cặp, bộ hoặc nhóm phần tử: Khi bạn cần tìm kiếm các cặp, bộ hoặc nhóm các phần tử thỏa mãn một điều kiện cụ thể (ví dụ: tìm cặp có tổng bằng một giá trị cho trước), kỹ thuật hai con trỏ thường hữu ích.

7. Phạm vi tương đối: Khi bạn cần tìm phạm vi tương đối trong một danh sách dựa trên một điểm tham chiếu hoặc vị trí tương đối, hai con trỏ có thể được sử dụng để xác định phạm vi đó.
