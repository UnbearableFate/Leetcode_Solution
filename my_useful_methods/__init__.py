def findPos(target, line, beg, end):
    if target >= line[end-1]:
        return end
    if target <= line[beg] :
        return 0
    if beg >= end :
        return -1
    if end - beg == 1 :
        if line[beg] == target :
            return beg + 1
        else:
            return -1
    if end - beg == 2 :
        if line[beg] <= target and target <= line[end-1] :
            return end-1
        else:
            return -1
    mid = int((beg + end) / 2)
    if target < line[mid]:
        return findPos(target, line, beg ,mid)
    if target == line[mid] :
        return mid
    if target > line[mid] :
        return findPos(target, line, mid,end)

def findPosListNode(target, line, beg, end):
    if target >= line[end-1].val:
        return end
    if target <= line[beg].val :
        return 0
    if beg >= end :
        return -1
    if end - beg == 1 :
        if line[beg].val == target :
            return beg + 1
        else:
            return -1
    if end - beg == 2 :
        if line[beg].val <= target and target <= line[end-1].val :
            return end-1
        else:
            return -1
    mid = int((beg + end) / 2)
    if target < line[mid].val:
        return findPos(target, line, beg ,mid)
    if target == line[mid].val :
        return mid
    if target > line[mid].val :
        return findPos(target, line, mid,end)
