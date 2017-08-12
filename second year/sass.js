
function stringsRearrangement(arr) {
  for(var i=0;i<arr.length;i++){
    var t=arr.slice()
    t.splice(i,1)
    t.unshift(arr[i])
    if(bingo(t)) return true
  }
  return false

  function bingo(arr){
    if(arr.length==1) return true
    var s=arr[0]
    arr=arr.slice(1)
    var can=arr.filter(x=>diff(s,x))
    if(can.length==0) return false
    for(var i=0;i<can.length;i++){
      var t=can[i],idx=arr.indexOf(t),newarr=arr.slice()
      newarr.splice(idx,1)
      newarr.unshift(t)
      if(bingo(newarr)) return true
    }
    return false
  }
  function diff(a,b){
    for(var i=0,r=0;i<a.length&&r<2;i++) r+=(a[i]!=b[i])
    return r===1
  }
}
