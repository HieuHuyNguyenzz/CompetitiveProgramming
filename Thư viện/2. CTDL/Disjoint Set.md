# Disjoint Set Union
Disjoint Set Union, hay DSU, là một cấu trúc dữ liệu trên đồ thị. DSU là một cấu trúc dữ liệu có thể quản lí một cách hiệu quả một tập hợp của các tập hợp.

## Ý tưởng và tác dụng?
DSU là một cấu trúc dữ liệu được tạo ra nhằm giải quyết một câu hỏi: hai phần tử x và y (thường là đỉnh trên đồ thị) có nằm trên cùng một tập hợp hay không. 
Thực tế bài toán trên có thể được giải sử dụng thuật toán DFS. Tuy nhiên với cấu trúc DSU, bài toán trên có thể được giải khi gặp yêu cầu trả lời nhiều truy vấn, hay với một đồ thị động - có thể thêm hoặc xóa đỉnh.

Ý tưởng chính của bài toán của cấu trúc DSU là nếu tồn tại một cạnh nối giữa tập A với tập B (mỗi tập có thể chứa nhiều đỉnh khác nhau), cấu trúc dữ liệu này sẽ gộp 2 tập này vào làm 1 và sử dụng một đỉnh làm giá trị để
nhận biết tập này. Cấu trúc DSU sẽ bao gồm 3 thao tác sau:
- ```make_set(v)```: tạo ra một tập hợp mới chỉ chứa phần tử v
- ```union_sets(a, b)```: gộp tập hợp chứa phần tử a và tập hợp chứa phần tử b thành một tập
- ```find_set(v)```: tìm phần tử đại diện cho tập chứa đỉnh v

## Cài đặt
Cài đặt tối ưu trong file sau: ...
```cpp
void make_set(int v) {
    lab[u] = -1;
}

int find_set(int v) {
    return lab[v] < 0 ? v : lab[v] = find_set(lab[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    
    if (a != b) {
        if (lab[a] > lab[b]) swap(a, b);
        lab[a] += lab[b];
        lab[b] = a;
    }
}
```
## Độ phức tạp
Dộ phức tạp cho các thao tác của DSU là O($\log{n}$) cho mỗi thao tác
