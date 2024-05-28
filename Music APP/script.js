let img = document.querySelector('.hello')
let cursoul = document.querySelector('.image-frame');

count = 1
cursoul.addEventListener('click', (e) => {

    if (count == 1) {
        img.src = "./images/heartDis.png"
        console.log(e.target);
        count=0
    }
    else{
        img.src='./images/like.png'
        count=1;
    }




})