import java.util.*;

public class SumOfTwo {
    public static void main(String[] args) {
        boolean error;
        do {
            error = true;
            try {
                if (Getter.checkSum(Getter.splitString(Setter.setNumbers()), Setter.setTargetSum()) == true) {
                    System.out.println("Does 2 numbers in the array add up to the target sum? : True");
                } else {
                    System.out.println("\nDoes 2 numbers in the array add up to the target sum? : False");
                }
                error = false;
            } catch (Exception e) {
                System.out.println("\nINVALID ENTRY!\n");
            }
        } while (error == true);

    }
}

class Setter {
    static Scanner scan = new Scanner(System.in);

    public static String setNumbers() {
        String numInString = "";

        System.out.println("Use ',' or ' ' for separation ex: [1,2,3 or 1 2 3]");
        System.out.print("Enter Array of Numbers: ");
        numInString = scan.nextLine();

        if (numInString.matches(".*[a-z].*")) {
            throw new IllegalArgumentException();
        }

        return numInString;
    }

    public static double setTargetSum() {
        double targetSum = 0.0;
        System.out.print("Enter target sum: ");
        targetSum = scan.nextDouble();

        scan.close();
        return targetSum;
    }
}

class Getter {
    public static String[] splitString(String numInString) {
        String[] numInArray = { "0" };
        for (int i = 0; i < numInString.length(); i++) {
            switch (numInString.charAt(i)) {
                case ',':
                    numInArray = numInString.split(",");
                    break;
                case ' ':
                    numInArray = numInString.split(" ");
                    break;
            }
        }

        return numInArray;
    }

    public static boolean checkSum(String[] numInArray, double targetSum) {
        double[] doubleNumArray = new double[numInArray.length];
        for (int i = 0; i < doubleNumArray.length; i++) {
            doubleNumArray[i] = Double.parseDouble(numInArray[i]);
        }
        Set<Double> numbersSet = new HashSet<>();
        for (double number : doubleNumArray) {
            if (numbersSet.contains(targetSum - number)) {
                System.out.println(
                        "\nNumbers adding up to target sum: " + (targetSum - number) + " and " + number + "");
                return true;
            }
            numbersSet.add(number);
        }

        return false;
    }
}