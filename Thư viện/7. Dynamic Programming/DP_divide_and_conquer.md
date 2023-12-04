# DIVIDE AND CONQUER OPTIMIZATION

Chia để trị là một kỹ thuật có thể được dùng để tối ưu hóa một số bài toán về Quy hoạch động. Mặc dù không thường xuất hiện tuy nhiên
đây là một kỹ thuật tương đối mạnh.

## Mở đầu
Giả sử chúng ta có một công thức truy hồi như sau:
$$dp(i, j) = min(dp(i-1, k-1) + C(k, j) $$
$$0 \le k \le j$$
Ta có$C(k,j)$ là một hàm chi phí nào đó. Có 
$min[i][j] \le min[i][j+1]$ với $min[i][j]$ là giá trị k nhỏ nhất mà cho ra kết quả tối ưu cho bài toán


