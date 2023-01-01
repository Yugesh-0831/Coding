class shape{

    void character(){
        System.out.println("i am a shape");
    }
}

class quadrileteral extends shape{

void character(){
    System.out.println("i am a quadrileteral");
}
}

class parallelogram extends quadrileteral{
    void character(){
        System.out.println("i am a parallelogram");
    }

    public static void main(String[] args){

       shape s = new quadrileteral();
       s.character();

       quadrileteral q=new parallelogram();
       q.character();
    }
}
