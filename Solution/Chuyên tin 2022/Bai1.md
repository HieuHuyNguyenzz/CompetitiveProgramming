# Bài 1: Chuỗi hạt

## Đề bài
Ngân có một chuỗi hạt được biểu diễn bằng một xâu 𝑆 có độ dài không quá 10000 kí tự, các
kí tự đều là chữ cái la tinh thường. Ngân muốn cắt chuỗi hạt để nhận được 𝑘 chuỗi con, trong
đó mỗi chuỗi con có độ dài định trước và là chuỗi đối xứng.
Yêu cầu: Hãy giúp Ngân xác định xem có tồn tại cách cắt 𝑆 để nhận được 𝑘 xâu đối xứng có
độ dài 𝑙1
, 𝑙2
, . . , 𝑙𝑘.
Ví dụ, có thể cắt xâu ‘asaaabbrcaacw’ để nhận được ba xâu đối xứng có độ dài 2, 3 và 4 là
‘bb’, ‘aaa’, ‘caac’.
Dữ liệu: Vào từ thiết bị vào chuẩn có khuôn dạng:
- Dòng đầu chứa xâu 𝑆;
- Dòng thứ hai chứa số nguyên 𝑇 là số trường hợp thử;
- 𝑇 dòng sau, mỗi dòng có dạng: số đầu tiên là số 𝑘, tiếp theo là 𝑘 số nguyên dương
𝑙1
, 𝑙2
, . . , 𝑙𝑘.
Kết quả: Ghi ra thiết bị ra chuẩn 𝑇 dòng, mỗi dòng tương ứng với một trường hợp thử
nghiệm, ghi “YES” nếu tồn tại cách cắt thỏa mãn hoặc “NO” trong trường hợp ngược lại.

Ví dụ:
---------
|Dữ liệu vào | Kết quả ra |
----------
|4 4 3      |              |
|  1 2 6||
| 2 4 10||
|  1 3 16||
|  3 4 4||
|  3 14
|  4 14
|  4 11
