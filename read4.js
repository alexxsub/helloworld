const fs = require('fs');
fs.readFile('input.txt', (err, data) => {
    if (err) {
      console.error(err)
      return
    }
    console.log(''+data)
  })