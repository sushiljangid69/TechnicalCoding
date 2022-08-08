class Program2 {
    public static int longestUniqueSubsttr(String str) {
        StringBuffer test = new StringBuffer();

        // Result
        int maxLength = -1;

        // Return zero if string is empty
        if (str.isEmpty()) {
            return 0;
        }
        // Return one if string length is one
        else if (str.length() == 1) {
            return 1;
        }
        for (char c : str.toCharArray()) {
            String current = String.valueOf(c);

            // If string already contains the character
            // Then substring after repeating character
            if (test.indexOf(current)!=-1) {
                int index = test.indexOf(current);
                test.replace(0,test.length(),test.substring(index+1));
            }
            test.append(c);
            maxLength = Math.max(test.length(), maxLength);
        }

        return maxLength;
    }

    // Driver code
    public static void main(String[] args) {
        String str = "seeeksformeals";
        System.out.println(str);

        int len = longestUniqueSubsttr(str);
        System.out.println("Length is = "+ len);
    }
}
