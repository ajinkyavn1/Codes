import java.io.*;
import java.util.Scanner;

class SmallestNumber {
    public static int compute(int number) {
        int count = 0, nextNumber;
        char[] arr = Integer.toBinaryString(number).toCharArray();
        for (int i = 0; i < arr.length; ++i) {
            if (arr[i] == '1')
                ++count;
        }
        nextNumber = findNextNumber(number, count);
        return nextNumber;
    }

    public static int findNextNumber(int number, int weight) {
        char[] arr;
        boolean flag = true;
        int count;
        while (flag) {

            arr = Integer.toBinaryString(++number).toCharArray();
            count = 0;
            for (int i = 0; i < arr.length; ++i) {
                if (arr[i] == '1')
                    ++count;
            }
            if (count == weight) {
                flag = false;
            }
        }

        return number;
    }

    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        System.out.println(compute(n));

    }
}

