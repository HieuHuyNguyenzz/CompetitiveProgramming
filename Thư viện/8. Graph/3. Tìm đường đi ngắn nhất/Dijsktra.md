# Dijsktra
Thuật toán Dijkstra được dùng để giải quyết bài toán đường đi ngắn nhất từ một đỉnh đến các đỉnh khác trên đồ thị, tuy nhiên thuật toán chỉ hoạt động trên đồ thị có trọng số không âm.

## Bài toán 
Cho một đồ thị có hướng với N đỉnh (được đánh số từ 0 đến N−1), M cạnh có hướng, có trọng số không âm, và một đỉnh nguồn S. Trọng số của tất cả các cạnh đều không âm. 
Yêu cầu tìm ra đường đi ngắn nhất từ đỉnh S tới tất cả các đỉnh còn lại (hoặc cho biết nếu không có đường đi).

Ví dụ:
![image](https://github.com/HieuHuyNguyenzz/CompetitiveProgramming/assets/135397654/3ea7291b-04af-4ffb-ba0c-526adc2eaace)

## Ý tưởng
Dựa trên tư tưởng tham lam, thuật toán Dijkstra tìm đường đi bằng cách chọn cạnh có trọng số nhỏ nhất từ một tập cạnh kề.
