# Lý thuyết đồ thị

## Khái niệm về đồ thị
Một đồ thị, kí hiệu là G(V, E), gồm hai thành phần:

- Tập hợp V, bao gồm các đối tượng, được gọi là tập hợp các đỉnh (vertex) của đồ thị
- Tập hợp E, bao gồm một cặp các đỉnh, được gọi là tập hợp các cạnh (vertex) của đồ thị

Ta sẽ kí hiệu m, n lần lượt là số đỉnh và số cạnh của đồ thị, |V| = n, |E| = m . Số đỉnh của đồ thị đôi khi ta cũng gọi là bậc của đồ thị (order of the graph).

Đồ thị được phân loại như sau:
![image](https://github.com/HieuHuyNguyenzz/CompetitiveProgramming/assets/135397654/fc1de7ad-fc67-448d-a784-6feb0b72425b)

## Một số khái niệm trên đồ thị
### 1. Cạnh
Trong một đồ thị, ta nói hai đỉnh trên đồ thị được nối với nhau thông qua một cạnh nếu giữa tồn tại một đường nối trực tiếp từ đỉnh này đến đỉnh kia

### 2. Bậc
Trong một đồ thị, bậc (degree) của đỉnh v trong đồ thị, ký hiệu deg(v), cạnh nối với đỉnh v.

Ta có các tính chất sau:
1. Tổng bậc của các đỉnh trong một đồ thị luôn luôn chi hết cho 2, hay:
           $\sum_{v} deg(v) = 2 \times m$
2. 
