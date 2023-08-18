# Hàm Z (Z function)
Hàm Z hay thuật toán Z là một hàm được sử dụng trong các bài toán liên quan đến việc tìm kiếm xâu. Khi đó một xâu sẽ được biểu diễn thông qua một mảng số.

## Hàm Z
Hàm Z của một xâu s độ dài n là một mảng chứa thông tin cho mỗi k = 0,1,...,n−1 về độ dài của chuỗi con dài nhất của s bắt đầu tại vị trí k và là tiền tố của chuỗi s.
Do đó, z[k] = p cho chúng ta biết rằng s[0... p−1] tương đương với s[k...k + p−1].

Ví dụ với mảng s = ACBACDACBACBACDA, ta có mảng z:
|Index|0|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|
|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|
|s||A|C|B|A|C|D|A|C|B|A|C|B|A|C|D|A|
|z|–| 0|0| 2| 0| 0| 5| 0| 0| 7| 0| 0| 2| 0| 0| 1|

## Ý tưởng
Ta duyệt qua tất cả các ký tự của S (chỉ số i từ 1 đến n−1). Trong quá trình duyệt, ta duy trì một đoạn [L,R] với R là một số lớn nhất thỏa 1≤L≤i≤R và [L,R] là một tiền tố của S (Nếu không xuất hiện các đoạn như vậy thì đặt L=R=−1).

Với i=1 ta có thể dễ dàng tính L và R bằng phép so sánh S[0..] với S[1..]. Đồng thời, ta có thể tính giá trị Z1.

Giả sử ta đã xây dựng được đoạn [L,R] và các giá trị Z[1..i−1], ta sẽ tính Zi và cập nhật đoạn [L,R] mới như sau:

Nếu i>R, khi đấy không tồn tại một chuỗi con là tiền tố của S bắt đầu tại một vị trí trước i và kết thúc tại ví trí i hoặc sau i. Bởi nếu như có một tiền tố như vậy, thì đoạn [L,i] sẽ là chuỗi tiền tố tối ưu chứ không phải [L,R]. Do đó, ta sẽ cập nhật lại đoạn [L,R]
 bằng cách so sánh S[0..] với S[i..] và lấy giá trị Zi hiện tại (Zi=R−L+1).

Ngược lại, i≤R thì đoạn [L,R] hiện tại kéo dài ít nhất đến i. Đặt k=i−L. Ta biết rằng Zi≥min(Zk,R−i+1) bởi vì S[i..] bằng với S[k..] ít nhất là R−i+1 ký tự. Xét các trường hợp sau:

Nếu Zk<R−i+1 thì sẽ không có chuỗi con nào là tiền tố của S dài hơn Zk bắt đầu tại Si. Nghĩa là Zi=Zk và đoạn [L,R] vẫn giữ nguyên (do đoạn [L,R] chỉ thay đổi nếu chuỗi tiền tố bắt đầu tại Si vượt ra khỏi đoạn [L,R]).
Nếu Zk≥R−i+1 thì chuỗi S[i..] là tiền tố của S và có nhiều hơn R−i+1 ký tự (tức là kết thúc sau vị trí R). Như vậy ta cần cập nhật đoạn [L,R] bằng cách đặt lại L=i và so sánh từ vị trí S[R+1] trở đi để được một vị trí R
 mới. Đồng thời, ta tính được giá trị của Zi.

 ## Độ phức tạp
 Tại mỗi bước trong vòng lặp, chúng ta không cần so sánh ký tự tại các vị trí nhỏ hơn R, và mỗi lần ký tự R phù hợp thì ta tăng R lên một, vì thế ta sẽ tốn nhiều nhất n phép so sánh. Ngoài ra, với mỗi giá trị i
, ta chỉ tìm thấy một ký tự không phù hợp (điều kiện tăng R). Vì thế không thể có nhiều hơn n phép so sánh cho kết quả sai. Đưa đến độ phức tạp thuật toán là O(n).

## Cài đặt
