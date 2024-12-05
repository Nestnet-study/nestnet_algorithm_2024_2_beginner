"""
BOJ 25305: 커트라인
개선된 버전: 변수명을 더 명확하게 하고 코드의 가독성을 향상
"""

N, k = map(int, input().split())
scores = list(map(int, input().split()))

scores.sort(reverse=True)
cutline = scores[k-1]

print(cutline) 