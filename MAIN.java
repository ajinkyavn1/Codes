import java.io.*;
import java.util.Scanner;
import java.util.*;

public class MAIN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num;
        int temp;
        int x1 = 0;
        int x2 = 0;
        int position1 = 0;
        int position2 = 0;
        int maxi = 0;

        num = sc.nextInt();
        int xx = sc.nextInt();
        int house_number[] = new int[num];
        int position[] = new int[num];
        int copy_position[] = new int[num];

        for (int i = 0; i < num; i++) {
            house_number[i] = sc.nextInt();
        }

        // for (int i = 0; i < num; i++) {
        // System.out.print("[" + house_number[i] + "," + position[i] + "] ");
        // }
        System.out.println("");
        for (int i = 0; i < num; i++) {
            copy_position[i] = position[i];
        }
        Arrays.sort(copy_position);
        for (int i = 0; i < num - 1; i++) {
            temp = copy_position[i + 1] - copy_position[i];
            if (temp > maxi) {
                maxi = temp;
                x1 = copy_position[i];
                x2 = copy_position[i + 1];
            }
        }
        for (int i = 0; i < num; i++) {
            if (x1 == position[i]) {
                position1 = i;
            } else if (x2 == position[i]) {
                position2 = i;
            }
        }
        if (house_number[position1] > house_number[position2]) {
            System.out.println(house_number[position2] + " " + house_number[position1]);
        } else {
            System.out.println(house_number[position1] + " " + house_number[position2]);
        }
    }
}
