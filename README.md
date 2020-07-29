# glove-mouse
<br/>
송신부에서 mpu-6050센서를 이용한 좌표값을 nrf24L01무선통신을 이용하여 즉각적으로 수신부에 보내고 <br/>
수신부 보드인 레오나르도 보드가 전달받은 좌표값으로 마우스 커서를 제어한다. <br/>
수신부는 작동시키고자하는 노트북이나 데스크톱에 직접 연결, 송신부는 외부전원을 연결 하여야 한다. 
<br/><br/>

1.구성장치
<br/><br/>
![image](https://user-images.githubusercontent.com/53510936/88827078-73a33780-d204-11ea-9231-0d3ecbfb5fcb.png)     
         
<br/>
2.핀배치도
<br/><br/>
수신부

![image](https://user-images.githubusercontent.com/53510936/88827408-e3b1bd80-d204-11ea-83df-f076aeed9d84.png)
<br/>
수신부는 uno보드 사용불가 mouse.h라이브러리와 호환되지 않음


<br/><br/>

송신부
<br/><br/>
![image](https://user-images.githubusercontent.com/53510936/88827299-c0870e00-d204-11ea-959c-337393212a3a.png)
<br/><br/>
3.기능구현
</br>
-마우스 커서 이동 구현
</br>
![image](https://user-images.githubusercontent.com/53510936/88833725-adc50700-d20d-11ea-8205-4bbd98d4ebcc.png)
Mpu - 6050과 아두이노 레오나르도 보드를 연결하여 아두이노 IDE를 통해
마우스의 커서 컨트롤하는 시스템을 구현하였다. x,y,z축은 센서를 움직일 때마다 즉각적으로 변하며 변하는 값을 이용하여 마우스 커서를 이동시킨다.
</br>
-플렉스 센서 전위차 확인
</br>
![image](https://user-images.githubusercontent.com/53510936/88833380-25defd00-d20d-11ea-9cd7-471884fb0990.png)
Flex 센서는 저항값에 따라 항상 구부렸을 때와 아닐 때의 전위가 다르므로 
테스트를 통해 센서값의 범위를 찾아야한다. 이는 레오나르도 보드로 할 필요는 없으며 UNO보드를 통해 실시 했으며, 적당하 범위를 찾은 후 if문과 Mouse.click(MOUSE_LEFT); ,Mouse.click(MOUSE_RIGHT);을 이용하여 마우스 클릭을 구현하게된다.
</br>
-송신부,수신부 무선통신 연결확인
</br>
![image](https://user-images.githubusercontent.com/53510936/88833426-342d1900-d20d-11ea-963a-714591d5fdcf.png)
NrF24L01모듈을 사용하여 송신부와 수신부가 무선으로 통신 할 수있게 하였다. 왼쪽 COM10이 송신부이고 오른쪽 COM7이 수신부 역할을 하는 보드이다. 송신부는 우노보드로 수신부는 레오나르도보드를 이용하였다. 송신부의 플렉스 센서 전위값과 MPU-6050이 읽는 좌표값을 수신부가 모듈을 통해서 즉각 받는 것을 확인하였다.



4.작동영상
<br/>
https://www.youtube.com/watch?v=GFvBI9RQfNk
