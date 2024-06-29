class Msg {
    public void show(String name) {
        synchronized (this) {
            for (int i = 0; i <= 3; i++) {
                System.out.println(  name);
            }
        }
    }
}

class Thread1 extends Thread {
    String name;
    Msg m;

    Thread1(Msg m, String name) {
        this.m = m;
        this.name = name;
    }

    public void run() {
        m.show(name);
    }
}

public class BlockLevelSyn {
    public static void main(String[] args) {
        Msg m = new Msg();
        Thread1 t1 = new Thread1(m, "akhilesh");
        Thread1 t2 = new Thread1(m, "aman");
        t1.start();
        t2.start();
    }
}
