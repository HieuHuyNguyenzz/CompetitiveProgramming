# Segment Tree
# Segment Tree

Mảng cộng dồn (Prefix Sum) là một cấu trúc dữ liệu tương đối tốt có thể được sử dụng khi gặp các bài toán về trả lời các truy vấn trên một mảng tu nhiên như đã đề cập trong bài
[Prefix sum](Prefix sum.md), cấu trúc này có các nhược điểm như sau:
- Không áp dụng được với các bài toán liên quan đến min-max
- Không hiệu quả với các bài toán có các truy vấn cập nhật mảng.

Các nhược điểm này đều được khắc phục sử dụng cấu trúc dữ liệu Segment Tree.

## Khái niệm
Cây phân đoạn (Segment tree) là một cấu trúc dữ liệu được xây dựng trên một cây nhị phân đầy đủ. Cấu trúc này hoạt động dựa trên tư tưởng chia để trị như sau:
- Mỗi nút quản lý một dãy các đối tượng liên tiếp, trong nút chứa thông tin tổng hợp từ các đối tượng mà nó quản lý.
- Với một dãy số gồm N phần tử, nút gốc quản lý các đối tượng từ 1 tới N.
- Nếu một nút quản lý dãy các đối tượng từ l tới r (l<r) thì nút con trái của nó quản lý các đối tượng từ l tới mid và nút con phải của nó quản lý các đối tượng từ mid+1 tới r (Với mid=$(l+r)/2$).
- Nếu một nút chỉ quản lý một đối tượng thì nó sẽ là nút lá và không có nút con. Chiều cao của cây phân đoạn là O(logN), bởi vì khi đi xuống từ gốc đến lá, kích thước của mỗi đoạn giảm đi một nửa. Tại mỗi độ sâu của cây, không có phần tử nào được quản lý bởi 2 nút khác nhau của cây.

Ví dụ với một cây phân đoạn dùng để tính tổng đoạn con:
![image](https://github.com/HieuHuyNguyenzz/CompetitiveProgramming/assets/135397654/fb2c08b5-be34-499c-8e83-173c66c586f2)
Khi đó, có 3 thao tác có thể thực hiện trên cây đó là:
- Thêm phần tử O(1)
- Cập nhật phần tử O($log{n}$) 
- Lấy giá trị của một đoạn O($log{n}$)

## Cài đặt
```cpp
template<class T> struct Segment { 
	const T ID = 1e18;
	int n; 
	vector<T> seg;
	void init(int _n){ 
		n = _n; seg.assign(2*n,ID); 
	}
	T comb(T a, T b){ 
		return min(a,b); 
	}
	void pull(int p){ 
		seg[p] = comb(seg[2*p],seg[2*p+1]); 
	}
	void upd(int p, T val) { 
		seg[p += n] = val; 
		for (p /= 2; p; p /= 2) 
			pull(p); 
	}
	T query(int l, int r) {	
		T ra = ID, rb = ID;
		for (l += n, r += n+1; l < r; l /= 2, r /= 2) {
			if (l&1) ra = comb(ra,seg[l++]);
			if (r&1) rb = comb(seg[--r],rb);
		}
		return comb(ra,rb);
	}
};
```

