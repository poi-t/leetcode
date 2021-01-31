/*���� n ���Ǹ����� a1��a2��...��an��ÿ�������������е�һ����?(i,ai) ��
�������ڻ� n ����ֱ�ߣ���ֱ�� i?�������˵�ֱ�Ϊ?(i,ai) �� (i, 0) ��
�ҳ����е������ߣ�ʹ��������?x?�Ṳͬ���ɵ�����������������ˮ��*/


public:
    int maxArea(vector<int>& height) {
    int ans = 0, left = 0, right = height.size() - 1;
	while(left < right)
	{
		int water = min(height[left], height[right]) * (right-left);
		ans = max(ans,water);
		if(height[left] > height[right]) --right;
		else ++left;
	}
	return ans;
    }
};

