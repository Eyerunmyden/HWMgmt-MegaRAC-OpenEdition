pipeline {
  agent any
  stages {
    stage('Division of 0') {
      parallel {
        stage('upxN') {
          steps {
            retry(count: 1)
          }
        }

        stage('DownxN') {
          steps {
            retry(count: 1)
          }
        }

      }
    }

    stage('0') {
      steps {
        retry(count: 1)
      }
    }

  }
  environment {
    Start = '0'
  }
}