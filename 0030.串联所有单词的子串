class Solution {
    public List<Integer> findSubstring(String s, String[] words) {
        if (s.length() == 0 || words.length == 0) {
            return new ArrayList<>();
        }
        List<Integer> result = new ArrayList<>();
        Map<String, Integer> map = new HashMap<>();
        for (String str : words) {
            if (map.containsKey(str)) {
                map.put(str, map.get(str) + 1);
            } else {
                map.put(str, 1);
            }
        }

        int length = words[0].length();
        for (int i = 0; i < length; i++) {
            int begin = i;
            int size = 0;
            Map<String, Integer> current = new HashMap<>();
            for (int j = i; j <= s.length() - length; j += length) {
                begin = begin == -1 ? j : begin;
                String substring = s.substring(j, j + length);
                if (map.containsKey(substring)) {
                    if (current.containsKey(substring)) {
                        current.put(substring, current.get(substring) + 1);
                    } else {
                        current.put(substring, 1);
                    }
                    size++;

                    if (size == words.length) {
                        if (current.equals(map)) {
                            result.add(begin);
                        }
                        size--;
                        String str = s.substring(begin, begin + length);
                        current.put(str, current.get(str) - 1);
                        begin += length;

                    }
                } else {
                    size = 0;
                    current.clear();
                    begin = -1;
                }
            }
        }

        return result;
    }


}
