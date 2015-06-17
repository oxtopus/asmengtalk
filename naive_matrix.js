var i = 0, j=0
var left = [], right = []


for (i=0; i<512; i++) {
  for (j=0; j<512; j++) {
    if (left[i] == undefined) {
      left[i] = []
    }
    if (Math.random() < 0.2) {
      left[i][j] = 1
    } else {
      left[i][j] = 0
    }
    if (right[i] == undefined) {
      right[i] = []
    }
    if (Math.random() < 0.2) {
      right[i][j] = 1
    } else {
      right[i][j] = 0
    }
  }
}

function multiply(a, b) {
  var aNumRows = a.length, aNumCols = a[0].length,
      bNumRows = b.length, bNumCols = b[0].length,
      m = new Array(aNumRows)
  for (var r = 0; r < aNumRows; ++r) {
    m[r] = new Array(bNumCols)
    for (var c = 0; c < bNumCols; ++c) {
      m[r][c] = 0;
      for (var i = 0; i < aNumCols; ++i) {
        m[r][c] += a[r][i] * b[i][c]
      }
    }
  }
  return m
}

console.log(multiply(left, right))
