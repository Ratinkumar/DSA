public class MaxOccurringCharacter {
    public static void findMaxOccurringChar(String str) {
        int[] charCount = new int[256];

        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            charCount[c]++;
        }
        char maxChar='0';
        int maxCount = 0;

        for (int i = 0; i < charCount.length; i++) {
            if (charCount[i] > maxCount) {
                maxChar = (char) i;
                maxCount = charCount[i];
            }
        }
        System.out.println("The maximum occurring character is: " + maxChar+"=>"+maxCount);
    }
    public static void main(String[] args) {
        String input = "Hello, World!";
        findMaxOccurringChar(input);
        //System.out.println("The maximum occurring character is: " + maxChar);
    }
}
