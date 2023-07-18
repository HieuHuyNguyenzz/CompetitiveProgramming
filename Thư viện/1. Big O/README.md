# Big O notation
Đánh giá độ phức tạp của thuật toán là một bước quan trọng trong quá trình giải một bài. Việc phân tích độ phức tạp có thể giúp chọn được giải thuật phù hợp hoặc là cắm đầu duyệt trâu nếu không làm được ^^.

Ta có bảng sau:
|  Input n  |  Độ phức tạp tệ nhất  | Ví dụ
|-----------|-----------------------|----
|  [10..11]   |  O(n!), O($n^6$)   |   Liệt kê hoán vị
|  [17..19]   |   O($2^n \times n^2$)   |   DP TSP 
|  [18..22]   |   O($2^n \times n$)   |   
|  [24..26]   |   O($2^n$)   |  
|  100   |   O($n^4$)   |   
|  450   |   O($n^3$)   |   Floyd-Warshall 
|  1.5K   |   O($n^{2.5}$)   | 
|  2.5K   |   O($n^4log {n}$)   |   
|  10K   |   O($n^2$)   |   Bubble/Selection/Insertion Sort
|  200K   |   O($n^{1.5}$)   |   
|  4.5M   |  O(n log n)   |   Merge Sort 
|  10M   |   O(n log log n)   |  Sàng Eratosthenes 
|  100M    |  O(n), O(log n), O(1)   |   Hầu hết các bài toán hiện nay :v

Bảng trên dựa trên giả định với ngôn ngữ C++ và một CPU có thể tính toán 100M phép tính trong 1s.


