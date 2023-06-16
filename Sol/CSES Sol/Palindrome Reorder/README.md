Sắp xếp lại sâu theo thứ tự bảng chữ cái. Khởi tạo các xâu rỗng sau:
```cpp
    string ans1="",ans2="",mid="";
```
Xâu ans1 là nửa trước của xâu đối xứng nếu có, ans2 là nửa sau của xâu đói xứng còn mid là ký tự đứng giữa và đối xứng với chính nó (VD: ABABA). ngoài ra tạo một biến đếm ```count``` để đếm các ký tự bị lẻ trong xâu. 
```cpp
    for(int i=0;i<n;){
    	if(s[i]==s[i+1]){
    		ans1+=s[i];
    		ans2+=s[i];
    		i+=2;
		}
		else{
			mid=s[i];
			count++;
			i++;
		}
	}
```
xét từng cặp ký tự trong s, nếu nó bằng nhau thì thêm vào ans1 và ans2. Nếu gặp ký tự lẻ thì mid = s[i] và chỉ cộng lên 1 và tăng biến count lên 1.
```cpp
if(count>1)cout<<"NO SOLUTION";
	else{
		reverse(ans2.begin(), ans2.end());
		cout<<ans1<<mid<<ans2;
	}
```
Nếu count > 1 thì không thể tồn tại xâu đối xứng do đó in ra NO SOLUTION. Ngược lại thì in ra xâu ans1+mid+ans2 với ans2. ans2 phải là đảo ngược của ans1, có 2 cách:
Cách 1:
```cpp
ans2=s[i]+ans2;
```
Cách 2 là sử dụng hàm ```cpp reverse() ``` như trên. Tuy nhiên, thực tế, `reverse()` thường sẽ nhanh hơn vì nó sử dụng một số chức năng tối ưu của C++ để đảo ngược chuỗi. Trong khi đó, cách 1 tạo một chuỗi mới trong bộ nhớ và gán cho ans2, điều này sẽ tốn thời gian và bộ nhớ hơn.
Sử dụng cách 1 sẽ dẫn đến TLE ở 5 test.
