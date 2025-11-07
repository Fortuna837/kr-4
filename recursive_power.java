public class Power {
    public static double power(double x, int n) {
        // Базовый случай
        if (n == 0) return 1.0;
        // Рекурсивный случай
        return x * power(x, n - 1);
    }

    public static void main(String[] args) {
        double x = 2.0;
        int n = 5;
        System.out.println(x + "^" + n + " = " + power(x, n));
        
        // Отладочная проверка (jdb)
        // Компиляция: javac -g Power.java
        // jdb Power
        // stop at Power:6
        // run
    }
}
