# glove-mouse
<br/>
송신부에서 mpu-6050센서를 이용한 좌표값을 nrf24L01무선통신을 이용하여 즉각적으로 수신부에 보내고 <br/>
수신부 보드인 레오나르도 보드가 전달받은 좌표값으로 마우스 커서를 제어한다. <br/>
수신부는 작동시키고자하는 노트북이나 데스크톱에 직접 연결, 송신부는 외부전원을 연결 하여야 한다. 
<br/>

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

3.작동영상
<br/>
https://www.youtube.com/watch?v=GFvBI9RQfNk
