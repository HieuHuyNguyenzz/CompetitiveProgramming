# Apartments

## Bài toán:
Có n người đăng ký và m căn hộ trống. Nhiệm vụ của bạn là phân phối các căn hộ để nhiều người có căn hộ nhất có thể.

Mỗi người đăng ký có một kích thước căn hộ mong muốn, và họ sẽ chấp nhận bất kỳ căn hộ nào có kích thước đủ gần với kích thước mong muốn.

Input
- Dòng đầu vào đầu tiên có ba số nguyên , n và m: số lượng người đăng ký, số lượng căn hộ và chênh lệch tối đa cho phép.
- Dòng tiếp theo chứa n số nguyên : kích thước căn hộ mong muốn của mỗi người đăng ký. Nếu kích thước mong muốn của người đăng ký là 
, người đó sẽ chấp nhận bất kỳ căn hộ nào có kích thước từ x-k đến x+k.
- Dòng cuối cùng chứa m số nguyên : kích thước của mỗi căn hộ.

Output

In một số nguyên: số lượng người sẽ có được một căn hộ.

## Cách giải
1. Sắp xếp: Đầu tiên, chúng ta sắp xếp cả danh sách ứng viên và danh sách căn hộ theo thứ tự tăng dần.

2. Với mỗi người với kích thước mong muốn x, tìm căn hộ có diện tích nhỏ nhất trong khoảng x-k đến x+k mà chưa có ai nhận. Nếu tìm được căn hộ
thỏa mãn thì gán căn hộ này với người đó, nếu không thì người này sẽ không nhân được căn hộ nào (tham lam).

Có 2 cách để xử lý bước này:
- Dùng tìm kiếm nhị phân (do đã sắp xếp danh sách nhà)
- Dùng phương pháp hai con trỏ

## Tính đúng đắn
1. Thuật toán tham lam: Thuật toán tham lam là một phương pháp tiếp cận mà ở đó chúng ta luôn chọn lựa chọn tốt nhất tại thời
điểm hiện tại mà không xem xét các lựa chọn sau này. Trong trường hợp này, chúng ta luôn cố gắng gán căn hộ cho ứng viên 
hiện tại (nếu có thể) trước khi chuyển sang ứng viên tiếp theo. Điều này đảm bảo rằng chúng ta không bỏ lỡ bất kỳ cơ hội 
nào để gán căn hộ cho ứng viên.

2. Sắp xếp danh sách: Việc sắp xếp danh sách ứng viên và căn hộ theo thứ tự tăng dần đảm bảo rằng chúng ta luôn xem xét ứng 
viên và căn hộ nhỏ nhất chưa được xem xét. Điều này, kết hợp với việc sử dụng thuật toán tham lam, đảm bảo rằng chúng ta 
luôn gán căn hộ cho ứng viên mà không cần phải quay lại và xem xét lại các lựa chọn trước đó.

## Tag
Greedy, sorting, binary search, two pointers
